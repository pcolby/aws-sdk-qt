// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINRESPONSE_P_H
#define QTAWS_LISTPACKAGESFORDOMAINRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class ListPackagesForDomainResponse;

class ListPackagesForDomainResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit ListPackagesForDomainResponsePrivate(ListPackagesForDomainResponse * const q);

    void parseListPackagesForDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackagesForDomainResponse)
    Q_DISABLE_COPY(ListPackagesForDomainResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
