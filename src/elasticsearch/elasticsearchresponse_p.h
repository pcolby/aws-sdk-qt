// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHRESPONSE_P_H
#define QTAWS_ELASTICSEARCHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchResponse;

class ElasticsearchResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElasticsearchResponsePrivate(ElasticsearchResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElasticsearchResponse)
    Q_DISABLE_COPY(ElasticsearchResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
