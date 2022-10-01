// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLTHROUGHCACHERULESRESPONSE_H
#define QTAWS_DESCRIBEPULLTHROUGHCACHERULESRESPONSE_H

#include "ecrresponse.h"
#include "describepullthroughcacherulesrequest.h"

namespace QtAws {
namespace Ecr {

class DescribePullThroughCacheRulesResponsePrivate;

class QTAWSECR_EXPORT DescribePullThroughCacheRulesResponse : public EcrResponse {
    Q_OBJECT

public:
    DescribePullThroughCacheRulesResponse(const DescribePullThroughCacheRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePullThroughCacheRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePullThroughCacheRulesResponse)
    Q_DISABLE_COPY(DescribePullThroughCacheRulesResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
