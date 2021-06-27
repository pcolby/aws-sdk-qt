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

#include "describepermissionsetprovisioningstatusresponse.h"
#include "describepermissionsetprovisioningstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetProvisioningStatusResponse
 * \brief The DescribePermissionSetProvisioningStatusResponse class provides an interace for SSOAdmin DescribePermissionSetProvisioningStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describePermissionSetProvisioningStatus
 */

/*!
 * Constructs a DescribePermissionSetProvisioningStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePermissionSetProvisioningStatusResponse::DescribePermissionSetProvisioningStatusResponse(
        const DescribePermissionSetProvisioningStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DescribePermissionSetProvisioningStatusResponsePrivate(this), parent)
{
    setRequest(new DescribePermissionSetProvisioningStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePermissionSetProvisioningStatusRequest * DescribePermissionSetProvisioningStatusResponse::request() const
{
    return static_cast<const DescribePermissionSetProvisioningStatusRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DescribePermissionSetProvisioningStatus \a response.
 */
void DescribePermissionSetProvisioningStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePermissionSetProvisioningStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetProvisioningStatusResponsePrivate
 * \brief The DescribePermissionSetProvisioningStatusResponsePrivate class provides private implementation for DescribePermissionSetProvisioningStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribePermissionSetProvisioningStatusResponsePrivate object with public implementation \a q.
 */
DescribePermissionSetProvisioningStatusResponsePrivate::DescribePermissionSetProvisioningStatusResponsePrivate(
    DescribePermissionSetProvisioningStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DescribePermissionSetProvisioningStatus response element from \a xml.
 */
void DescribePermissionSetProvisioningStatusResponsePrivate::parseDescribePermissionSetProvisioningStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePermissionSetProvisioningStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
