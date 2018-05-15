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

#include "startuserimportjobresponse.h"
#include "startuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::StartUserImportJobResponse
 * \brief The StartUserImportJobResponse class provides an interace for CognitoIdentityProvider StartUserImportJob responses.
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
 * \sa CognitoIdentityProviderClient::startUserImportJob
 */

/*!
 * Constructs a StartUserImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartUserImportJobResponse::StartUserImportJobResponse(
        const StartUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new StartUserImportJobResponsePrivate(this), parent)
{
    setRequest(new StartUserImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartUserImportJobRequest * StartUserImportJobResponse::request() const
{
    Q_D(const StartUserImportJobResponse);
    return static_cast<const StartUserImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider StartUserImportJob \a response.
 */
void StartUserImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::StartUserImportJobResponsePrivate
 * \brief The StartUserImportJobResponsePrivate class provides private implementation for StartUserImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a StartUserImportJobResponsePrivate object with public implementation \a q.
 */
StartUserImportJobResponsePrivate::StartUserImportJobResponsePrivate(
    StartUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider StartUserImportJob response element from \a xml.
 */
void StartUserImportJobResponsePrivate::parseStartUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartUserImportJobResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
