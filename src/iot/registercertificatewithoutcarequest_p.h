// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEWITHOUTCAREQUEST_P_H
#define QTAWS_REGISTERCERTIFICATEWITHOUTCAREQUEST_P_H

#include "iotrequest_p.h"
#include "registercertificatewithoutcarequest.h"

namespace QtAws {
namespace IoT {

class RegisterCertificateWithoutCARequest;

class RegisterCertificateWithoutCARequestPrivate : public IoTRequestPrivate {

public:
    RegisterCertificateWithoutCARequestPrivate(const IoTRequest::Action action,
                                   RegisterCertificateWithoutCARequest * const q);
    RegisterCertificateWithoutCARequestPrivate(const RegisterCertificateWithoutCARequestPrivate &other,
                                   RegisterCertificateWithoutCARequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterCertificateWithoutCARequest)

};

} // namespace IoT
} // namespace QtAws

#endif
