/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TRANSFERCERTIFICATERESPONSE_H
#define QTAWS_TRANSFERCERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "transfercertificaterequest.h"

namespace QtAws {
namespace IoT {

class TransferCertificateResponsePrivate;

class QTAWS_EXPORT TransferCertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    TransferCertificateResponse(const TransferCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferCertificateRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(TransferCertificateResponse)
    Q_DISABLE_COPY(TransferCertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
