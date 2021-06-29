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

#ifndef QTAWS_UPDATEREQUESTVALIDATORRESPONSE_H
#define QTAWS_UPDATEREQUESTVALIDATORRESPONSE_H

#include "apigatewayresponse.h"
#include "updaterequestvalidatorrequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateRequestValidatorResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateRequestValidatorResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    UpdateRequestValidatorResponse(const UpdateRequestValidatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRequestValidatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRequestValidatorResponse)
    Q_DISABLE_COPY(UpdateRequestValidatorResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
