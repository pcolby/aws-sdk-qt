// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEDOMAINREQUEST_P_H
#define QTAWS_UPGRADEDOMAINREQUEST_P_H

#include "opensearchrequest_p.h"
#include "upgradedomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpgradeDomainRequest;

class UpgradeDomainRequestPrivate : public OpenSearchRequestPrivate {

public:
    UpgradeDomainRequestPrivate(const OpenSearchRequest::Action action,
                                   UpgradeDomainRequest * const q);
    UpgradeDomainRequestPrivate(const UpgradeDomainRequestPrivate &other,
                                   UpgradeDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpgradeDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
