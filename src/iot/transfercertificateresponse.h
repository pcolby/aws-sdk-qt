// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCERTIFICATERESPONSE_H
#define QTAWS_TRANSFERCERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "transfercertificaterequest.h"

namespace QtAws {
namespace IoT {

class TransferCertificateResponsePrivate;

class QTAWSIOT_EXPORT TransferCertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    TransferCertificateResponse(const TransferCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferCertificateResponse)
    Q_DISABLE_COPY(TransferCertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
