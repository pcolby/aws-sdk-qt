/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBECACERTIFICATERESPONSE_H
#define QTAWS_DESCRIBECACERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "describecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeCACertificateResponsePrivate;

class QTAWS_EXPORT DescribeCACertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeCACertificateResponse(const DescribeCACertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCACertificateRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeCACertificateResponse)
    Q_DISABLE_COPY(DescribeCACertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
