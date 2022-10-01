// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCERTIFICATETRANSFERREQUEST_P_H
#define QTAWS_CANCELCERTIFICATETRANSFERREQUEST_P_H

#include "iotrequest_p.h"
#include "cancelcertificatetransferrequest.h"

namespace QtAws {
namespace IoT {

class CancelCertificateTransferRequest;

class CancelCertificateTransferRequestPrivate : public IoTRequestPrivate {

public:
    CancelCertificateTransferRequestPrivate(const IoTRequest::Action action,
                                   CancelCertificateTransferRequest * const q);
    CancelCertificateTransferRequestPrivate(const CancelCertificateTransferRequestPrivate &other,
                                   CancelCertificateTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelCertificateTransferRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
