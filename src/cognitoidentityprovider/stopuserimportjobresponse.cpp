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

#include "stopuserimportjobresponse.h"
#include "stopuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobResponse
 * \brief The StopUserImportJobResponse class provides an interace for CognitoIdentityProvider StopUserImportJob responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::stopUserImportJob
 */

/*!
 * Constructs a StopUserImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopUserImportJobResponse::StopUserImportJobResponse(
        const StopUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new StopUserImportJobResponsePrivate(this), parent)
{
    setRequest(new StopUserImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopUserImportJobRequest * StopUserImportJobResponse::request() const
{
    Q_D(const StopUserImportJobResponse);
    return static_cast<const StopUserImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider StopUserImportJob \a response.
 */
void StopUserImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobResponsePrivate
 * \brief The StopUserImportJobResponsePrivate class provides private implementation for StopUserImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a StopUserImportJobResponsePrivate object with public implementation \a q.
 */
StopUserImportJobResponsePrivate::StopUserImportJobResponsePrivate(
    StopUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider StopUserImportJob response element from \a xml.
 */
void StopUserImportJobResponsePrivate::parseStopUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopUserImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
