// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTATEMACHINEREQUEST_P_H
#define QTAWS_CREATESTATEMACHINEREQUEST_P_H

#include "sfnrequest_p.h"
#include "createstatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class CreateStateMachineRequest;

class CreateStateMachineRequestPrivate : public SfnRequestPrivate {

public:
    CreateStateMachineRequestPrivate(const SfnRequest::Action action,
                                   CreateStateMachineRequest * const q);
    CreateStateMachineRequestPrivate(const CreateStateMachineRequestPrivate &other,
                                   CreateStateMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
