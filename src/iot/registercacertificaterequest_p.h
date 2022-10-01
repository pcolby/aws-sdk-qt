// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCACERTIFICATEREQUEST_P_H
#define QTAWS_REGISTERCACERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "registercacertificaterequest.h"

namespace QtAws {
namespace IoT {

class RegisterCACertificateRequest;

class RegisterCACertificateRequestPrivate : public IoTRequestPrivate {

public:
    RegisterCACertificateRequestPrivate(const IoTRequest::Action action,
                                   RegisterCACertificateRequest * const q);
    RegisterCACertificateRequestPrivate(const RegisterCACertificateRequestPrivate &other,
                                   RegisterCACertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
