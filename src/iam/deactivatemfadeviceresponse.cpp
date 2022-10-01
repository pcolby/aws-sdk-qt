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

#include "deactivatemfadeviceresponse.h"
#include "deactivatemfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeactivateMFADeviceResponse
 * \brief The DeactivateMFADeviceResponse class provides an interace for Iam DeactivateMFADevice responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::deactivateMFADevice
 */

/*!
 * Constructs a DeactivateMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateMFADeviceResponse::DeactivateMFADeviceResponse(
        const DeactivateMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeactivateMFADeviceResponsePrivate(this), parent)
{
    setRequest(new DeactivateMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateMFADeviceRequest * DeactivateMFADeviceResponse::request() const
{
    Q_D(const DeactivateMFADeviceResponse);
    return static_cast<const DeactivateMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeactivateMFADevice \a response.
 */
void DeactivateMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeactivateMFADeviceResponsePrivate
 * \brief The DeactivateMFADeviceResponsePrivate class provides private implementation for DeactivateMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeactivateMFADeviceResponsePrivate object with public implementation \a q.
 */
DeactivateMFADeviceResponsePrivate::DeactivateMFADeviceResponsePrivate(
    DeactivateMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeactivateMFADevice response element from \a xml.
 */
void DeactivateMFADeviceResponsePrivate::parseDeactivateMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
