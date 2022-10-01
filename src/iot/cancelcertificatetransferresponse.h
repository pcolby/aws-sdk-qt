// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCERTIFICATETRANSFERRESPONSE_H
#define QTAWS_CANCELCERTIFICATETRANSFERRESPONSE_H

#include "iotresponse.h"
#include "cancelcertificatetransferrequest.h"

namespace QtAws {
namespace IoT {

class CancelCertificateTransferResponsePrivate;

class QTAWSIOT_EXPORT CancelCertificateTransferResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelCertificateTransferResponse(const CancelCertificateTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelCertificateTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCertificateTransferResponse)
    Q_DISABLE_COPY(CancelCertificateTransferResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
