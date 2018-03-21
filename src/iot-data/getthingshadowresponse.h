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

#ifndef QTAWS_GETTHINGSHADOWRESPONSE_H
#define QTAWS_GETTHINGSHADOWRESPONSE_H

#include "iotdataplaneresponse.h"
#include "getthingshadowrequest.h"

namespace AWS {

namespace IoTDataPlane {

class GetThingShadowResponsePrivate;

class QTAWS_EXPORT GetThingShadowResponse : public GetThingShadowResponse {
    Q_OBJECT

public:
    GetThingShadowResponse(const GetThingShadowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThingShadowRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetThingShadowResponse)
    Q_DISABLE_COPY(GetThingShadowResponse)

};

} // namespace IoTDataPlane
} // namespace AWS

#endif
