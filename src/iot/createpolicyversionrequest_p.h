// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYVERSIONREQUEST_P_H
#define QTAWS_CREATEPOLICYVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createpolicyversionrequest.h"

namespace QtAws {
namespace IoT {

class CreatePolicyVersionRequest;

class CreatePolicyVersionRequestPrivate : public IoTRequestPrivate {

public:
    CreatePolicyVersionRequestPrivate(const IoTRequest::Action action,
                                   CreatePolicyVersionRequest * const q);
    CreatePolicyVersionRequestPrivate(const CreatePolicyVersionRequestPrivate &other,
                                   CreatePolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
