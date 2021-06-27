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

#include "getbackendauthresponse.h"
#include "getbackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthResponse
 * \brief The GetBackendAuthResponse class provides an interace for AmplifyBackend GetBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAuth
 */

/*!
 * Constructs a GetBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAuthResponse::GetBackendAuthResponse(
        const GetBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAuthResponsePrivate(this), parent)
{
    setRequest(new GetBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAuthRequest * GetBackendAuthResponse::request() const
{
    return static_cast<const GetBackendAuthRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAuth \a response.
 */
void GetBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthResponsePrivate
 * \brief The GetBackendAuthResponsePrivate class provides private implementation for GetBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAuthResponsePrivate object with public implementation \a q.
 */
GetBackendAuthResponsePrivate::GetBackendAuthResponsePrivate(
    GetBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAuth response element from \a xml.
 */
void GetBackendAuthResponsePrivate::parseGetBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
