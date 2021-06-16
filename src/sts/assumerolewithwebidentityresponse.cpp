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

#include "assumerolewithwebidentityresponse.h"
#include "assumerolewithwebidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::AssumeRoleWithWebIdentityResponse
 * \brief The AssumeRoleWithWebIdentityResponse class provides an interace for STS AssumeRoleWithWebIdentity responses.
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
 * \sa StsClient::assumeRoleWithWebIdentity
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeRoleWithWebIdentityResponse::AssumeRoleWithWebIdentityResponse(
        const AssumeRoleWithWebIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new AssumeRoleWithWebIdentityResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleWithWebIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeRoleWithWebIdentityRequest * AssumeRoleWithWebIdentityResponse::request() const
{
    Q_D(const AssumeRoleWithWebIdentityResponse);
    return static_cast<const AssumeRoleWithWebIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful STS AssumeRoleWithWebIdentity \a response.
 */
void AssumeRoleWithWebIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeRoleWithWebIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::STS::AssumeRoleWithWebIdentityResponsePrivate
 * \brief The AssumeRoleWithWebIdentityResponsePrivate class provides private implementation for AssumeRoleWithWebIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityResponsePrivate object with public implementation \a q.
 */
AssumeRoleWithWebIdentityResponsePrivate::AssumeRoleWithWebIdentityResponsePrivate(
    AssumeRoleWithWebIdentityResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a STS AssumeRoleWithWebIdentity response element from \a xml.
 */
void AssumeRoleWithWebIdentityResponsePrivate::parseAssumeRoleWithWebIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleWithWebIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace STS
} // namespace QtAws
