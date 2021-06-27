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

#include "getsessiontokenresponse.h"
#include "getsessiontokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::GetSessionTokenResponse
 * \brief The GetSessionTokenResponse class provides an interace for STS GetSessionToken responses.
 *
 * \inmodule QtAwsSTS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  AWS Security Token Service (STS) enables you to request temporary, limited-privilege credentials for AWS Identity and
 *  Access Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of
 *  the STS API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::getSessionToken
 */

/*!
 * Constructs a GetSessionTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionTokenResponse::GetSessionTokenResponse(
        const GetSessionTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetSessionTokenResponsePrivate(this), parent)
{
    setRequest(new GetSessionTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionTokenRequest * GetSessionTokenResponse::request() const
{
    return static_cast<const GetSessionTokenRequest *>(StsResponse::request());
}

/*!
 * \reimp
 * Parses a successful STS GetSessionToken \a response.
 */
void GetSessionTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::STS::GetSessionTokenResponsePrivate
 * \brief The GetSessionTokenResponsePrivate class provides private implementation for GetSessionTokenResponse.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a GetSessionTokenResponsePrivate object with public implementation \a q.
 */
GetSessionTokenResponsePrivate::GetSessionTokenResponsePrivate(
    GetSessionTokenResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a STS GetSessionToken response element from \a xml.
 */
void GetSessionTokenResponsePrivate::parseGetSessionTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace STS
} // namespace QtAws
