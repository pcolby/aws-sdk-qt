// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEELASTICSEARCHDOMAINRESPONSE_P_H
#define QTAWS_UPGRADEELASTICSEARCHDOMAINRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class UpgradeElasticsearchDomainResponse;

class UpgradeElasticsearchDomainResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit UpgradeElasticsearchDomainResponsePrivate(UpgradeElasticsearchDomainResponse * const q);

    void parseUpgradeElasticsearchDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpgradeElasticsearchDomainResponse)
    Q_DISABLE_COPY(UpgradeElasticsearchDomainResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
