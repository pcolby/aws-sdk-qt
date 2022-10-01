// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHCLIENT_P_H
#define QTAWS_ELASTICSEARCHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchClient;

class ElasticsearchClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElasticsearchClientPrivate(ElasticsearchClient * const q);

private:
    Q_DECLARE_PUBLIC(ElasticsearchClient)
    Q_DISABLE_COPY(ElasticsearchClientPrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
