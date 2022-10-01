// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEELASTICSEARCHDOMAINRESPONSE_P_H
#define QTAWS_CREATEELASTICSEARCHDOMAINRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class CreateElasticsearchDomainResponse;

class CreateElasticsearchDomainResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit CreateElasticsearchDomainResponsePrivate(CreateElasticsearchDomainResponse * const q);

    void parseCreateElasticsearchDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateElasticsearchDomainResponse)
    Q_DISABLE_COPY(CreateElasticsearchDomainResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
