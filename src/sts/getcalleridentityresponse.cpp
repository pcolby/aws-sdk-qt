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

#include "getcalleridentityresponse.h"
#include "getcalleridentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::GetCallerIdentityResponse
 * \brief The GetCallerIdentityResponse class provides an interace for STS GetCallerIdentity responses.
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
 * \sa StsClient::getCallerIdentity
 */

/*!
 * Constructs a GetCallerIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
GetCallerIdentityResponse::GetCallerIdentityResponse(
        const GetCallerIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetCallerIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCallerIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCallerIdentityRequest * GetCallerIdentityResponse::request() const
{
    return static_cast<const GetCallerIdentityRequest *>(StsResponse::request());
}

/*!
 * \reimp
 * Parses a successful STS GetCallerIdentity \a response.
 */
void GetCallerIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCallerIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::STS::GetCallerIdentityResponsePrivate
 * \brief The GetCallerIdentityResponsePrivate class provides private implementation for GetCallerIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a GetCallerIdentityResponsePrivate object with public implementation \a q.
 */
GetCallerIdentityResponsePrivate::GetCallerIdentityResponsePrivate(
    GetCallerIdentityResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a STS GetCallerIdentity response element from \a xml.
 */
void GetCallerIdentityResponsePrivate::parseGetCallerIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCallerIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace STS
} // namespace QtAws
