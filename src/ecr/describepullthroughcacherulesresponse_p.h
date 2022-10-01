// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLTHROUGHCACHERULESRESPONSE_P_H
#define QTAWS_DESCRIBEPULLTHROUGHCACHERULESRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribePullThroughCacheRulesResponse;

class DescribePullThroughCacheRulesResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribePullThroughCacheRulesResponsePrivate(DescribePullThroughCacheRulesResponse * const q);

    void parseDescribePullThroughCacheRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePullThroughCacheRulesResponse)
    Q_DISABLE_COPY(DescribePullThroughCacheRulesResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
