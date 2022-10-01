// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERREQUEST_P_H
#define QTAWS_MODIFYUSERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifyuserrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserRequest;

class ModifyUserRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyUserRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyUserRequest * const q);
    ModifyUserRequestPrivate(const ModifyUserRequestPrivate &other,
                                   ModifyUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyUserRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
