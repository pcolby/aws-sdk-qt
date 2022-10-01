// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITCONTAINERSTATECHANGEREQUEST_P_H
#define QTAWS_SUBMITCONTAINERSTATECHANGEREQUEST_P_H

#include "ecsrequest_p.h"
#include "submitcontainerstatechangerequest.h"

namespace QtAws {
namespace Ecs {

class SubmitContainerStateChangeRequest;

class SubmitContainerStateChangeRequestPrivate : public EcsRequestPrivate {

public:
    SubmitContainerStateChangeRequestPrivate(const EcsRequest::Action action,
                                   SubmitContainerStateChangeRequest * const q);
    SubmitContainerStateChangeRequestPrivate(const SubmitContainerStateChangeRequestPrivate &other,
                                   SubmitContainerStateChangeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitContainerStateChangeRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
