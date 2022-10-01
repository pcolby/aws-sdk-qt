// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCERTIFICATETRANSFERRESPONSE_P_H
#define QTAWS_CANCELCERTIFICATETRANSFERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CancelCertificateTransferResponse;

class CancelCertificateTransferResponsePrivate : public IoTResponsePrivate {

public:

    explicit CancelCertificateTransferResponsePrivate(CancelCertificateTransferResponse * const q);

    void parseCancelCertificateTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelCertificateTransferResponse)
    Q_DISABLE_COPY(CancelCertificateTransferResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
