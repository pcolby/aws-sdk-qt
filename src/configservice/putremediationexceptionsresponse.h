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

#ifndef QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_H
#define QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_H

#include "configserviceresponse.h"
#include "putremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationExceptionsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRemediationExceptionsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutRemediationExceptionsResponse(const PutRemediationExceptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRemediationExceptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRemediationExceptionsResponse)
    Q_DISABLE_COPY(PutRemediationExceptionsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
