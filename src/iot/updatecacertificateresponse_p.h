// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACERTIFICATERESPONSE_P_H
#define QTAWS_UPDATECACERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateCACertificateResponse;

class UpdateCACertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateCACertificateResponsePrivate(UpdateCACertificateResponse * const q);

    void parseUpdateCACertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCACertificateResponse)
    Q_DISABLE_COPY(UpdateCACertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
