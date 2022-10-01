// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLTHROUGHCACHERULESREQUEST_H
#define QTAWS_DESCRIBEPULLTHROUGHCACHERULESREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DescribePullThroughCacheRulesRequestPrivate;

class QTAWSECR_EXPORT DescribePullThroughCacheRulesRequest : public EcrRequest {

public:
    DescribePullThroughCacheRulesRequest(const DescribePullThroughCacheRulesRequest &other);
    DescribePullThroughCacheRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePullThroughCacheRulesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
