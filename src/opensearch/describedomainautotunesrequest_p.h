// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describedomainautotunesrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainAutoTunesRequest;

class DescribeDomainAutoTunesRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeDomainAutoTunesRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeDomainAutoTunesRequest * const q);
    DescribeDomainAutoTunesRequestPrivate(const DescribeDomainAutoTunesRequestPrivate &other,
                                   DescribeDomainAutoTunesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainAutoTunesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
