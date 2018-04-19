/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getgroupcertificateauthorityresponse.h"
#include "getgroupcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateAuthorityResponse
 * \brief The GetGroupCertificateAuthorityResponse class provides an interace for Greengrass GetGroupCertificateAuthority responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getGroupCertificateAuthority
 */

/*!
 * Constructs a GetGroupCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupCertificateAuthorityResponse::GetGroupCertificateAuthorityResponse(
        const GetGroupCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new GetGroupCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupCertificateAuthorityRequest * GetGroupCertificateAuthorityResponse::request() const
{
    Q_D(const GetGroupCertificateAuthorityResponse);
    return static_cast<const GetGroupCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetGroupCertificateAuthority \a response.
 */
void GetGroupCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetGroupCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetGroupCertificateAuthorityResponsePrivate
 * \brief The GetGroupCertificateAuthorityResponsePrivate class provides private implementation for GetGroupCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
GetGroupCertificateAuthorityResponsePrivate::GetGroupCertificateAuthorityResponsePrivate(
    GetGroupCertificateAuthorityResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetGroupCertificateAuthority response element from \a xml.
 */
void GetGroupCertificateAuthorityResponsePrivate::parseGetGroupCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupCertificateAuthorityResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
