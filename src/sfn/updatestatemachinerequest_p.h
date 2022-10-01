// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTATEMACHINEREQUEST_P_H
#define QTAWS_UPDATESTATEMACHINEREQUEST_P_H

#include "sfnrequest_p.h"
#include "updatestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class UpdateStateMachineRequest;

class UpdateStateMachineRequestPrivate : public SfnRequestPrivate {

public:
    UpdateStateMachineRequestPrivate(const SfnRequest::Action action,
                                   UpdateStateMachineRequest * const q);
    UpdateStateMachineRequestPrivate(const UpdateStateMachineRequestPrivate &other,
                                   UpdateStateMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
