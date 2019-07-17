/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CREATEUSERIMPORTJOBRESPONSE_H
#define QTAWS_CREATEUSERIMPORTJOBRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "createuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserImportJobResponsePrivate;

class QTAWS_EXPORT CreateUserImportJobResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateUserImportJobResponse(const CreateUserImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserImportJobResponse)
    Q_DISABLE_COPY(CreateUserImportJobResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
