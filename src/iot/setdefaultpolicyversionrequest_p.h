// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_P_H
#define QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "setdefaultpolicyversionrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultPolicyVersionRequest;

class SetDefaultPolicyVersionRequestPrivate : public IoTRequestPrivate {

public:
    SetDefaultPolicyVersionRequestPrivate(const IoTRequest::Action action,
                                   SetDefaultPolicyVersionRequest * const q);
    SetDefaultPolicyVersionRequestPrivate(const SetDefaultPolicyVersionRequestPrivate &other,
                                   SetDefaultPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDefaultPolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
