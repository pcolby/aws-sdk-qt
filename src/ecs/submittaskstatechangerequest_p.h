// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITTASKSTATECHANGEREQUEST_P_H
#define QTAWS_SUBMITTASKSTATECHANGEREQUEST_P_H

#include "ecsrequest_p.h"
#include "submittaskstatechangerequest.h"

namespace QtAws {
namespace Ecs {

class SubmitTaskStateChangeRequest;

class SubmitTaskStateChangeRequestPrivate : public EcsRequestPrivate {

public:
    SubmitTaskStateChangeRequestPrivate(const EcsRequest::Action action,
                                   SubmitTaskStateChangeRequest * const q);
    SubmitTaskStateChangeRequestPrivate(const SubmitTaskStateChangeRequestPrivate &other,
                                   SubmitTaskStateChangeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitTaskStateChangeRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
