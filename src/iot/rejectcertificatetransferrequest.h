// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTCERTIFICATETRANSFERREQUEST_H
#define QTAWS_REJECTCERTIFICATETRANSFERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RejectCertificateTransferRequestPrivate;

class QTAWSIOT_EXPORT RejectCertificateTransferRequest : public IoTRequest {

public:
    RejectCertificateTransferRequest(const RejectCertificateTransferRequest &other);
    RejectCertificateTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectCertificateTransferRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
