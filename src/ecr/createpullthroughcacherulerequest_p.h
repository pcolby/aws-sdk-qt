// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLTHROUGHCACHERULEREQUEST_P_H
#define QTAWS_CREATEPULLTHROUGHCACHERULEREQUEST_P_H

#include "ecrrequest_p.h"
#include "createpullthroughcacherulerequest.h"

namespace QtAws {
namespace Ecr {

class CreatePullThroughCacheRuleRequest;

class CreatePullThroughCacheRuleRequestPrivate : public EcrRequestPrivate {

public:
    CreatePullThroughCacheRuleRequestPrivate(const EcrRequest::Action action,
                                   CreatePullThroughCacheRuleRequest * const q);
    CreatePullThroughCacheRuleRequestPrivate(const CreatePullThroughCacheRuleRequestPrivate &other,
                                   CreatePullThroughCacheRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePullThroughCacheRuleRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
