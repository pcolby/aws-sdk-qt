// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCERTIFICATEREQUEST_P_H
#define QTAWS_DEREGISTERCERTIFICATEREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deregistercertificaterequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterCertificateRequest;

class DeregisterCertificateRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeregisterCertificateRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeregisterCertificateRequest * const q);
    DeregisterCertificateRequestPrivate(const DeregisterCertificateRequestPrivate &other,
                                   DeregisterCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterCertificateRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
