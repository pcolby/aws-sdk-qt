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

#include "listclusterjobsresponse.h"
#include "listclusterjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListClusterJobsResponse
 * \brief The ListClusterJobsResponse class provides an interace for Snowball ListClusterJobs responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::listClusterJobs
 */

/*!
 * Constructs a ListClusterJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListClusterJobsResponse::ListClusterJobsResponse(
        const ListClusterJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListClusterJobsResponsePrivate(this), parent)
{
    setRequest(new ListClusterJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClusterJobsRequest * ListClusterJobsResponse::request() const
{
    Q_D(const ListClusterJobsResponse);
    return static_cast<const ListClusterJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball ListClusterJobs \a response.
 */
void ListClusterJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListClusterJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::ListClusterJobsResponsePrivate
 * \brief The ListClusterJobsResponsePrivate class provides private implementation for ListClusterJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListClusterJobsResponsePrivate object with public implementation \a q.
 */
ListClusterJobsResponsePrivate::ListClusterJobsResponsePrivate(
    ListClusterJobsResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball ListClusterJobs response element from \a xml.
 */
void ListClusterJobsResponsePrivate::parseListClusterJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClusterJobsResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
