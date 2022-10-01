// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRATIONCODEREQUEST_P_H
#define QTAWS_GETREGISTRATIONCODEREQUEST_P_H

#include "iotrequest_p.h"
#include "getregistrationcoderequest.h"

namespace QtAws {
namespace IoT {

class GetRegistrationCodeRequest;

class GetRegistrationCodeRequestPrivate : public IoTRequestPrivate {

public:
    GetRegistrationCodeRequestPrivate(const IoTRequest::Action action,
                                   GetRegistrationCodeRequest * const q);
    GetRegistrationCodeRequestPrivate(const GetRegistrationCodeRequestPrivate &other,
                                   GetRegistrationCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegistrationCodeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
