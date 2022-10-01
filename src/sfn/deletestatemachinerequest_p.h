// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTATEMACHINEREQUEST_P_H
#define QTAWS_DELETESTATEMACHINEREQUEST_P_H

#include "sfnrequest_p.h"
#include "deletestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class DeleteStateMachineRequest;

class DeleteStateMachineRequestPrivate : public SfnRequestPrivate {

public:
    DeleteStateMachineRequestPrivate(const SfnRequest::Action action,
                                   DeleteStateMachineRequest * const q);
    DeleteStateMachineRequestPrivate(const DeleteStateMachineRequestPrivate &other,
                                   DeleteStateMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
