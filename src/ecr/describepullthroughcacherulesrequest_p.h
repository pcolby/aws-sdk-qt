// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLTHROUGHCACHERULESREQUEST_P_H
#define QTAWS_DESCRIBEPULLTHROUGHCACHERULESREQUEST_P_H

#include "ecrrequest_p.h"
#include "describepullthroughcacherulesrequest.h"

namespace QtAws {
namespace Ecr {

class DescribePullThroughCacheRulesRequest;

class DescribePullThroughCacheRulesRequestPrivate : public EcrRequestPrivate {

public:
    DescribePullThroughCacheRulesRequestPrivate(const EcrRequest::Action action,
                                   DescribePullThroughCacheRulesRequest * const q);
    DescribePullThroughCacheRulesRequestPrivate(const DescribePullThroughCacheRulesRequestPrivate &other,
                                   DescribePullThroughCacheRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePullThroughCacheRulesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
