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

#include "createuserimportjobresponse.h"
#include "createuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserImportJobResponse
 * \brief The CreateUserImportJobResponse class provides an interace for CognitoIdentityProvider CreateUserImportJob responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::createUserImportJob
 */

/*!
 * Constructs a CreateUserImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserImportJobResponse::CreateUserImportJobResponse(
        const CreateUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateUserImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserImportJobRequest * CreateUserImportJobResponse::request() const
{
    Q_D(const CreateUserImportJobResponse);
    return static_cast<const CreateUserImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateUserImportJob \a response.
 */
void CreateUserImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserImportJobResponsePrivate
 * \brief The CreateUserImportJobResponsePrivate class provides private implementation for CreateUserImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserImportJobResponsePrivate object with public implementation \a q.
 */
CreateUserImportJobResponsePrivate::CreateUserImportJobResponsePrivate(
    CreateUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateUserImportJob response element from \a xml.
 */
void CreateUserImportJobResponsePrivate::parseCreateUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
