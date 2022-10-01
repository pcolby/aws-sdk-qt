// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEWITHOUTCARESPONSE_P_H
#define QTAWS_REGISTERCERTIFICATEWITHOUTCARESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RegisterCertificateWithoutCAResponse;

class RegisterCertificateWithoutCAResponsePrivate : public IoTResponsePrivate {

public:

    explicit RegisterCertificateWithoutCAResponsePrivate(RegisterCertificateWithoutCAResponse * const q);

    void parseRegisterCertificateWithoutCAResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterCertificateWithoutCAResponse)
    Q_DISABLE_COPY(RegisterCertificateWithoutCAResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
