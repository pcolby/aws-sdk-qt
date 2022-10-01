// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTCERTIFICATETRANSFERREQUEST_P_H
#define QTAWS_ACCEPTCERTIFICATETRANSFERREQUEST_P_H

#include "iotrequest_p.h"
#include "acceptcertificatetransferrequest.h"

namespace QtAws {
namespace IoT {

class AcceptCertificateTransferRequest;

class AcceptCertificateTransferRequestPrivate : public IoTRequestPrivate {

public:
    AcceptCertificateTransferRequestPrivate(const IoTRequest::Action action,
                                   AcceptCertificateTransferRequest * const q);
    AcceptCertificateTransferRequestPrivate(const AcceptCertificateTransferRequestPrivate &other,
                                   AcceptCertificateTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptCertificateTransferRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
