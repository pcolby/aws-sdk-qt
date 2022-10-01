// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATERESPONSE_H
#define QTAWS_REGISTERCERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "registercertificaterequest.h"

namespace QtAws {
namespace IoT {

class RegisterCertificateResponsePrivate;

class QTAWSIOT_EXPORT RegisterCertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    RegisterCertificateResponse(const RegisterCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCertificateResponse)
    Q_DISABLE_COPY(RegisterCertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
