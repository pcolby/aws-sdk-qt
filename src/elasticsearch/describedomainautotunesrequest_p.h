// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describedomainautotunesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeDomainAutoTunesRequest;

class DescribeDomainAutoTunesRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeDomainAutoTunesRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeDomainAutoTunesRequest * const q);
    DescribeDomainAutoTunesRequestPrivate(const DescribeDomainAutoTunesRequestPrivate &other,
                                   DescribeDomainAutoTunesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainAutoTunesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
