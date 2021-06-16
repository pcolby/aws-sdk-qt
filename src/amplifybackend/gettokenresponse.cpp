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

#include "gettokenresponse.h"
#include "gettokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetTokenResponse
 * \brief The GetTokenResponse class provides an interace for AmplifyBackend GetToken responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getToken
 */

/*!
 * Constructs a GetTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetTokenResponse::GetTokenResponse(
        const GetTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetTokenResponsePrivate(this), parent)
{
    setRequest(new GetTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTokenRequest * GetTokenResponse::request() const
{
    Q_D(const GetTokenResponse);
    return static_cast<const GetTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetToken \a response.
 */
void GetTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetTokenResponsePrivate
 * \brief The GetTokenResponsePrivate class provides private implementation for GetTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetTokenResponsePrivate object with public implementation \a q.
 */
GetTokenResponsePrivate::GetTokenResponsePrivate(
    GetTokenResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetToken response element from \a xml.
 */
void GetTokenResponsePrivate::parseGetTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
