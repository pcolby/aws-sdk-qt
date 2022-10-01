// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCERTIFICATERESPONSE_P_H
#define QTAWS_TRANSFERCERTIFICATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class TransferCertificateResponse;

class TransferCertificateResponsePrivate : public IoTResponsePrivate {

public:

    explicit TransferCertificateResponsePrivate(TransferCertificateResponse * const q);

    void parseTransferCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferCertificateResponse)
    Q_DISABLE_COPY(TransferCertificateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
