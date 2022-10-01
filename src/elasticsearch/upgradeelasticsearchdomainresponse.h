// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEELASTICSEARCHDOMAINRESPONSE_H
#define QTAWS_UPGRADEELASTICSEARCHDOMAINRESPONSE_H

#include "elasticsearchresponse.h"
#include "upgradeelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpgradeElasticsearchDomainResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT UpgradeElasticsearchDomainResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    UpgradeElasticsearchDomainResponse(const UpgradeElasticsearchDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpgradeElasticsearchDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeElasticsearchDomainResponse)
    Q_DISABLE_COPY(UpgradeElasticsearchDomainResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
