// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_P_H
#define QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateKeysAndCertificateResponse;

class CreateKeysAndCertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateKeysAndCertificateResponsePrivate(CreateKeysAndCertificateResponse * const q);

    void parseCreateKeysAndCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeysAndCertificateResponse)
    Q_DISABLE_COPY(CreateKeysAndCertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
