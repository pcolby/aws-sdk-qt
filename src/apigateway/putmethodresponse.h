/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_PUTMETHODRESPONSE_H
#define QTAWS_PUTMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "putmethodrequest.h"

namespace QtAws {
namespace APIGateway {

class PutMethodResponsePrivate;

class QTAWS_EXPORT PutMethodResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    PutMethodResponse(const PutMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMethodResponse)
    Q_DISABLE_COPY(PutMethodResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
