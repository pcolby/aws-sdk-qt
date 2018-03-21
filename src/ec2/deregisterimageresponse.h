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

#ifndef QTAWS_DEREGISTERIMAGERESPONSE_H
#define QTAWS_DEREGISTERIMAGERESPONSE_H

#include "ec2response.h"
#include "deregisterimagerequest.h"

namespace AWS {

namespace EC2 {

class DeregisterImageResponsePrivate;

class QTAWS_EXPORT DeregisterImageResponse : public EC2Response {
    Q_OBJECT

public:
    DeregisterImageResponse(const DeregisterImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterImageRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeregisterImageResponse)
    Q_DISABLE_COPY(DeregisterImageResponse)

};

} // namespace EC2
} // namespace AWS

#endif
