// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEDOMAINRESPONSE_P_H
#define QTAWS_UPGRADEDOMAINRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class UpgradeDomainResponse;

class UpgradeDomainResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit UpgradeDomainResponsePrivate(UpgradeDomainResponse * const q);

    void parseUpgradeDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpgradeDomainResponse)
    Q_DISABLE_COPY(UpgradeDomainResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
