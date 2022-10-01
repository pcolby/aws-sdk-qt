// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCACERTIFICATERESPONSE_H
#define QTAWS_REGISTERCACERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "registercacertificaterequest.h"

namespace QtAws {
namespace IoT {

class RegisterCACertificateResponsePrivate;

class QTAWSIOT_EXPORT RegisterCACertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    RegisterCACertificateResponse(const RegisterCACertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterCACertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCACertificateResponse)
    Q_DISABLE_COPY(RegisterCACertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
