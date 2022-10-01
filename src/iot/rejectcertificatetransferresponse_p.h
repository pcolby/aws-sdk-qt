// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_P_H
#define QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RejectCertificateTransferResponse;

class RejectCertificateTransferResponsePrivate : public IoTResponsePrivate {

public:

    explicit RejectCertificateTransferResponsePrivate(RejectCertificateTransferResponse * const q);

    void parseRejectCertificateTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectCertificateTransferResponse)
    Q_DISABLE_COPY(RejectCertificateTransferResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
