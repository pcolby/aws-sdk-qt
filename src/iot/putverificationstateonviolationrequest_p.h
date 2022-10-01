// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVERIFICATIONSTATEONVIOLATIONREQUEST_P_H
#define QTAWS_PUTVERIFICATIONSTATEONVIOLATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "putverificationstateonviolationrequest.h"

namespace QtAws {
namespace IoT {

class PutVerificationStateOnViolationRequest;

class PutVerificationStateOnViolationRequestPrivate : public IoTRequestPrivate {

public:
    PutVerificationStateOnViolationRequestPrivate(const IoTRequest::Action action,
                                   PutVerificationStateOnViolationRequest * const q);
    PutVerificationStateOnViolationRequestPrivate(const PutVerificationStateOnViolationRequestPrivate &other,
                                   PutVerificationStateOnViolationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVerificationStateOnViolationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
