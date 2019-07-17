/*
    Copyright 2013-2019 Paul Colby

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

#include "describeaccountmodificationsresponse.h"
#include "describeaccountmodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeAccountModificationsResponse
 * \brief The DescribeAccountModificationsResponse class provides an interace for WorkSpaces DescribeAccountModifications responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeAccountModifications
 */

/*!
 * Constructs a DescribeAccountModificationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountModificationsResponse::DescribeAccountModificationsResponse(
        const DescribeAccountModificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeAccountModificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountModificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountModificationsRequest * DescribeAccountModificationsResponse::request() const
{
    Q_D(const DescribeAccountModificationsResponse);
    return static_cast<const DescribeAccountModificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeAccountModifications \a response.
 */
void DescribeAccountModificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountModificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeAccountModificationsResponsePrivate
 * \brief The DescribeAccountModificationsResponsePrivate class provides private implementation for DescribeAccountModificationsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeAccountModificationsResponsePrivate object with public implementation \a q.
 */
DescribeAccountModificationsResponsePrivate::DescribeAccountModificationsResponsePrivate(
    DescribeAccountModificationsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeAccountModifications response element from \a xml.
 */
void DescribeAccountModificationsResponsePrivate::parseDescribeAccountModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountModificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
