// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEREQUEST_P_H
#define QTAWS_REGISTERCERTIFICATEREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "registercertificaterequest.h"

namespace QtAws {
namespace DirectoryService {

class RegisterCertificateRequest;

class RegisterCertificateRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    RegisterCertificateRequestPrivate(const DirectoryServiceRequest::Action action,
                                   RegisterCertificateRequest * const q);
    RegisterCertificateRequestPrivate(const RegisterCertificateRequestPrivate &other,
                                   RegisterCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterCertificateRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
