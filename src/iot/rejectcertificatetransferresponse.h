// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_H
#define QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_H

#include "iotresponse.h"
#include "rejectcertificatetransferrequest.h"

namespace QtAws {
namespace IoT {

class RejectCertificateTransferResponsePrivate;

class QTAWSIOT_EXPORT RejectCertificateTransferResponse : public IoTResponse {
    Q_OBJECT

public:
    RejectCertificateTransferResponse(const RejectCertificateTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectCertificateTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectCertificateTransferResponse)
    Q_DISABLE_COPY(RejectCertificateTransferResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
