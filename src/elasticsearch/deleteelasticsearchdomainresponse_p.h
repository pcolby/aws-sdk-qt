// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHDOMAINRESPONSE_P_H
#define QTAWS_DELETEELASTICSEARCHDOMAINRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchDomainResponse;

class DeleteElasticsearchDomainResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DeleteElasticsearchDomainResponsePrivate(DeleteElasticsearchDomainResponse * const q);

    void parseDeleteElasticsearchDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteElasticsearchDomainResponse)
    Q_DISABLE_COPY(DeleteElasticsearchDomainResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
