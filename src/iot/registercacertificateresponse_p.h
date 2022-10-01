// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCACERTIFICATERESPONSE_P_H
#define QTAWS_REGISTERCACERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RegisterCACertificateResponse;

class RegisterCACertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit RegisterCACertificateResponsePrivate(RegisterCACertificateResponse * const q);

    void parseRegisterCACertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterCACertificateResponse)
    Q_DISABLE_COPY(RegisterCACertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
