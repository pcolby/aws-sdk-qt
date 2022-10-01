// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTCERTIFICATETRANSFERRESPONSE_P_H
#define QTAWS_ACCEPTCERTIFICATETRANSFERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AcceptCertificateTransferResponse;

class AcceptCertificateTransferResponsePrivate : public IoTResponsePrivate {

public:

    explicit AcceptCertificateTransferResponsePrivate(AcceptCertificateTransferResponse * const q);

    void parseAcceptCertificateTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptCertificateTransferResponse)
    Q_DISABLE_COPY(AcceptCertificateTransferResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
