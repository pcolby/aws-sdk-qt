// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTCERTIFICATETRANSFERRESPONSE_H
#define QTAWS_ACCEPTCERTIFICATETRANSFERRESPONSE_H

#include "iotresponse.h"
#include "acceptcertificatetransferrequest.h"

namespace QtAws {
namespace IoT {

class AcceptCertificateTransferResponsePrivate;

class QTAWSIOT_EXPORT AcceptCertificateTransferResponse : public IoTResponse {
    Q_OBJECT

public:
    AcceptCertificateTransferResponse(const AcceptCertificateTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptCertificateTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptCertificateTransferResponse)
    Q_DISABLE_COPY(AcceptCertificateTransferResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
