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

#ifndef QTAWS_GETSDKTYPERESPONSE_H
#define QTAWS_GETSDKTYPERESPONSE_H

#include "apigatewayresponse.h"
#include "getsdktyperequest.h"

namespace AWS {

namespace apigateway {

class GetSdkTypeResponsePrivate;

class QTAWS_EXPORT GetSdkTypeResponse : public GetSdkTypeResponse {
    Q_OBJECT

public:
    GetSdkTypeResponse(const GetSdkTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSdkTypeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetSdkTypeResponse)
    Q_DISABLE_COPY(GetSdkTypeResponse)

};

} // namespace apigateway
} // namespace AWS

#endif
