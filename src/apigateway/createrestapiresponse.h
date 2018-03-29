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

#ifndef QTAWS_CREATERESTAPIRESPONSE_H
#define QTAWS_CREATERESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "createrestapirequest.h"

namespace QtAws {
namespace APIGateway {

class CreateRestApiResponsePrivate;

class QTAWS_EXPORT CreateRestApiResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    CreateRestApiResponse(const CreateRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRestApiRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateRestApiResponse)
    Q_DISABLE_COPY(CreateRestApiResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
