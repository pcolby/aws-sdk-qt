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

#include "describeaccountassignmentdeletionstatusresponse.h"
#include "describeaccountassignmentdeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentDeletionStatusResponse
 * \brief The DescribeAccountAssignmentDeletionStatusResponse class provides an interace for SSOAdmin DescribeAccountAssignmentDeletionStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeAccountAssignmentDeletionStatus
 */

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountAssignmentDeletionStatusResponse::DescribeAccountAssignmentDeletionStatusResponse(
        const DescribeAccountAssignmentDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DescribeAccountAssignmentDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountAssignmentDeletionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountAssignmentDeletionStatusRequest * DescribeAccountAssignmentDeletionStatusResponse::request() const
{
    return static_cast<const DescribeAccountAssignmentDeletionStatusRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DescribeAccountAssignmentDeletionStatus \a response.
 */
void DescribeAccountAssignmentDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountAssignmentDeletionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentDeletionStatusResponsePrivate
 * \brief The DescribeAccountAssignmentDeletionStatusResponsePrivate class provides private implementation for DescribeAccountAssignmentDeletionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusResponsePrivate object with public implementation \a q.
 */
DescribeAccountAssignmentDeletionStatusResponsePrivate::DescribeAccountAssignmentDeletionStatusResponsePrivate(
    DescribeAccountAssignmentDeletionStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DescribeAccountAssignmentDeletionStatus response element from \a xml.
 */
void DescribeAccountAssignmentDeletionStatusResponsePrivate::parseDescribeAccountAssignmentDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountAssignmentDeletionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
