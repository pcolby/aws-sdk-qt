// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEWITHOUTCARESPONSE_H
#define QTAWS_REGISTERCERTIFICATEWITHOUTCARESPONSE_H

#include "iotresponse.h"
#include "registercertificatewithoutcarequest.h"

namespace QtAws {
namespace IoT {

class RegisterCertificateWithoutCAResponsePrivate;

class QTAWSIOT_EXPORT RegisterCertificateWithoutCAResponse : public IoTResponse {
    Q_OBJECT

public:
    RegisterCertificateWithoutCAResponse(const RegisterCertificateWithoutCARequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterCertificateWithoutCARequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCertificateWithoutCAResponse)
    Q_DISABLE_COPY(RegisterCertificateWithoutCAResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
