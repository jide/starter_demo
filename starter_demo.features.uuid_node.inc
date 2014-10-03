<?php
/**
 * @file
 * starter_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function starter_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Une actualité',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'article',
  'language' => 'fr',
  'created' => 1412334354,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '206a50ed-1d1f-4e3d-9ac4-3c8d1ae55a94',
  'body' => array(
    'fr' => array(
      0 => array(
        'value' => '<p>Dans sa note, rédigée sur un ton peu amène, Anne Glover relaie la lettre des contestataires et demande une série d’explications de nature scientifique au directeur général à l’environnement, Karl Falkenberg. Elle intime ensuite à l’intéressé d’être impliquée&nbsp;«&nbsp;à un stade précoce dans les dossiers scientifiques aussi sensibles et aussi controversés&nbsp;».&nbsp;En dépit de cette note, adressée en copie au secrétariat général ainsi qu’à d’autres&nbsp;services&nbsp;de la Commission, Mme&nbsp;Glover estime&nbsp;avoir&nbsp;été&nbsp;«&nbsp;associée de manière très limitée avec le&nbsp;dossier des perturbateurs endocriniens&nbsp;».&nbsp;«&nbsp;Je n’ai été en aucun cas en cause ou impliquée dans un quelconque retard du processus, explique-t-elle dans un courriel adressé au&nbsp;Monde.&nbsp;Mon poste à la Commission n’inclut aucun rôle, formel ou informel, dans les processus décisionnels et je ne suis consultée par aucune direction générale sur des questions spécifiques.&nbsp;»</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '5ec52fb4-9620-4e4e-9d83-98664c442a92',
        'width' => 1024,
        'height' => 768,
      ),
    ),
  ),
  'field_tags' => array(),
  'title_field' => array(
    'fr' => array(
      0 => array(
        'value' => 'Une actualité',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'fr',
    'data' => array(
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412334354,
        'entity_uuid' => '206a50ed-1d1f-4e3d-9ac4-3c8d1ae55a94',
        'user_uuid' => '77a15067-6f92-418b-89f3-b69106b4a822',
      ),
    ),
  ),
  'date' => '2014-10-03 13:05:54 +0200',
  'user_uuid' => '77a15067-6f92-418b-89f3-b69106b4a822',
);
  $nodes[] = array(
  'title' => 'A propos',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1412334124,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fbda7fd9-327e-4978-8348-a74827452db0',
  'body' => array(
    'fr' => array(
      0 => array(
        'value' => '<p>Alors que la question d’une telle étude d’impact n’était officiellement pas prévue à l’agenda bruxellois jusqu’à l’été 2013,&nbsp;Terra Eco&nbsp;publie un&nbsp;courriel&nbsp;adressé par le chimiste&nbsp;Bayer&nbsp;au secrétariat général de la Commission et daté du 7&nbsp;juin. Dans le message, la société allemande l’exprime sans ambages&nbsp;:&nbsp;«&nbsp;Nous vous demandons de&nbsp;vous&nbsp;prononcer&nbsp;en faveur de la mise en œuvre d’une étude d’impact.&nbsp;»&nbsp;Contactée par&nbsp;Le Monde, la Commission ne remet pas&nbsp;en questionl’authenticité du courrier mais précise que&nbsp;«&nbsp;ce n’est pas une seule lettre, issue d’une seule entreprise, qui a un poids dans ce processus&nbsp;». «&nbsp;Toutes les parties prenantes, y compris les organisations non gouvernementales, ont souligné l’importance d’une réglementation spécifique (ou non) des perturbateurs endocriniens au vu des répercussions environnementales et socio-économiques, ajoute-t-on à Bruxelles. Le courrier de&nbsp;Bayer&nbsp;n’en est qu’un exemple.&nbsp;»</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '5ec52fb4-9620-4e4e-9d83-98664c442a92',
        'width' => 1024,
        'height' => 768,
      ),
    ),
  ),
  'title_field' => array(
    'fr' => array(
      0 => array(
        'value' => 'A propos',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'fr',
    'data' => array(
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412334124,
        'entity_uuid' => 'fbda7fd9-327e-4978-8348-a74827452db0',
        'user_uuid' => '77a15067-6f92-418b-89f3-b69106b4a822',
      ),
    ),
  ),
  'date' => '2014-10-03 13:02:04 +0200',
  'user_uuid' => '77a15067-6f92-418b-89f3-b69106b4a822',
);
  return $nodes;
}
