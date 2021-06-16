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

#include "describeaccountassignmentcreationstatusresponse.h"
#include "describeaccountassignmentcreationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentCreationStatusResponse
 * \brief The DescribeAccountAssignmentCreationStatusResponse class provides an interace for SSOAdmin DescribeAccountAssignmentCreationStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeAccountAssignmentCreationStatus
 */

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountAssignmentCreationStatusResponse::DescribeAccountAssignmentCreationStatusResponse(
        const DescribeAccountAssignmentCreationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DescribeAccountAssignmentCreationStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountAssignmentCreationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountAssignmentCreationStatusRequest * DescribeAccountAssignmentCreationStatusResponse::request() const
{
    Q_D(const DescribeAccountAssignmentCreationStatusResponse);
    return static_cast<const DescribeAccountAssignmentCreationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DescribeAccountAssignmentCreationStatus \a response.
 */
void DescribeAccountAssignmentCreationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountAssignmentCreationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentCreationStatusResponsePrivate
 * \brief The DescribeAccountAssignmentCreationStatusResponsePrivate class provides private implementation for DescribeAccountAssignmentCreationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusResponsePrivate object with public implementation \a q.
 */
DescribeAccountAssignmentCreationStatusResponsePrivate::DescribeAccountAssignmentCreationStatusResponsePrivate(
    DescribeAccountAssignmentCreationStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DescribeAccountAssignmentCreationStatus response element from \a xml.
 */
void DescribeAccountAssignmentCreationStatusResponsePrivate::parseDescribeAccountAssignmentCreationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountAssignmentCreationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
