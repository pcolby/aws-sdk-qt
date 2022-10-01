// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCERTIFICATETRANSFERREQUEST_H
#define QTAWS_CANCELCERTIFICATETRANSFERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CancelCertificateTransferRequestPrivate;

class QTAWSIOT_EXPORT CancelCertificateTransferRequest : public IoTRequest {

public:
    CancelCertificateTransferRequest(const CancelCertificateTransferRequest &other);
    CancelCertificateTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCertificateTransferRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
