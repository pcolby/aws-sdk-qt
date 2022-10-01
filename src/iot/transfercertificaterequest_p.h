// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCERTIFICATEREQUEST_P_H
#define QTAWS_TRANSFERCERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "transfercertificaterequest.h"

namespace QtAws {
namespace IoT {

class TransferCertificateRequest;

class TransferCertificateRequestPrivate : public IoTRequestPrivate {

public:
    TransferCertificateRequestPrivate(const IoTRequest::Action action,
                                   TransferCertificateRequest * const q);
    TransferCertificateRequestPrivate(const TransferCertificateRequestPrivate &other,
                                   TransferCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransferCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
