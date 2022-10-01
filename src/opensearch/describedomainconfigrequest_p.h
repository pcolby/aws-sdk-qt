// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINCONFIGREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describedomainconfigrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainConfigRequest;

class DescribeDomainConfigRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeDomainConfigRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeDomainConfigRequest * const q);
    DescribeDomainConfigRequestPrivate(const DescribeDomainConfigRequestPrivate &other,
                                   DescribeDomainConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainConfigRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
