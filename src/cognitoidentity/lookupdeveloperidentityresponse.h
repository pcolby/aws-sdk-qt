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

#ifndef QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_H
#define QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "lookupdeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class LookupDeveloperIdentityResponsePrivate;

class QTAWS_EXPORT LookupDeveloperIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    LookupDeveloperIdentityResponse(const LookupDeveloperIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LookupDeveloperIdentityRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(LookupDeveloperIdentityResponse)
    Q_DISABLE_COPY(LookupDeveloperIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
