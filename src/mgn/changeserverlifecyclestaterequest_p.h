// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGESERVERLIFECYCLESTATEREQUEST_P_H
#define QTAWS_CHANGESERVERLIFECYCLESTATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "changeserverlifecyclestaterequest.h"

namespace QtAws {
namespace Mgn {

class ChangeServerLifeCycleStateRequest;

class ChangeServerLifeCycleStateRequestPrivate : public MgnRequestPrivate {

public:
    ChangeServerLifeCycleStateRequestPrivate(const MgnRequest::Action action,
                                   ChangeServerLifeCycleStateRequest * const q);
    ChangeServerLifeCycleStateRequestPrivate(const ChangeServerLifeCycleStateRequestPrivate &other,
                                   ChangeServerLifeCycleStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeServerLifeCycleStateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
