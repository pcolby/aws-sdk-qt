// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATERESPONSE_P_H
#define QTAWS_UPDATECERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateCertificateResponse;

class UpdateCertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateCertificateResponsePrivate(UpdateCertificateResponse * const q);

    void parseUpdateCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateResponse)
    Q_DISABLE_COPY(UpdateCertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
