/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_P_H
#define QTAWS_REJECTCERTIFICATETRANSFERRESPONSE_P_H

#include "iotresponse.h"
#include "rejectcertificatetransferrequest.h"

namespace AWS {

namespace IoT {

class RejectCertificateTransferResponse;

class QTAWS_EXPORT RejectCertificateTransferResponsePrivate : public IoTResponsePrivate {
    Q_OBJECT

public:

    RejectCertificateTransferResponsePrivate(RejectCertificateTransferResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectCertificateTransferResponse)
    Q_DISABLE_COPY(RejectCertificateTransferResponsePrivate)

};

} // namespace IoT
} // namespace AWS

#endif
