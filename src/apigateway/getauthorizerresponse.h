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

#ifndef QTAWS_GETAUTHORIZERRESPONSE_H
#define QTAWS_GETAUTHORIZERRESPONSE_H

#include "apigatewayresponse.h"
#include "getauthorizerrequest.h"

namespace AWS {

namespace APIGateway {

class GetAuthorizerResponsePrivate;

class QTAWS_EXPORT GetAuthorizerResponse : public GetAuthorizerResponse {
    Q_OBJECT

public:
    GetAuthorizerResponse(const GetAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAuthorizerRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetAuthorizerResponse)
    Q_DISABLE_COPY(GetAuthorizerResponse)

};

} // namespace APIGateway
} // namespace AWS

#endif
