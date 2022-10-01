// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEDOMAINRESPONSE_H
#define QTAWS_UPGRADEDOMAINRESPONSE_H

#include "opensearchresponse.h"
#include "upgradedomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpgradeDomainResponsePrivate;

class QTAWSOPENSEARCH_EXPORT UpgradeDomainResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    UpgradeDomainResponse(const UpgradeDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpgradeDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeDomainResponse)
    Q_DISABLE_COPY(UpgradeDomainResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
