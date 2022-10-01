// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLTHROUGHCACHERULEREQUEST_P_H
#define QTAWS_DELETEPULLTHROUGHCACHERULEREQUEST_P_H

#include "ecrrequest_p.h"
#include "deletepullthroughcacherulerequest.h"

namespace QtAws {
namespace Ecr {

class DeletePullThroughCacheRuleRequest;

class DeletePullThroughCacheRuleRequestPrivate : public EcrRequestPrivate {

public:
    DeletePullThroughCacheRuleRequestPrivate(const EcrRequest::Action action,
                                   DeletePullThroughCacheRuleRequest * const q);
    DeletePullThroughCacheRuleRequestPrivate(const DeletePullThroughCacheRuleRequestPrivate &other,
                                   DeletePullThroughCacheRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePullThroughCacheRuleRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
