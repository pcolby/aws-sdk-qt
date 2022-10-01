// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
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
    //Q_D(ListClusterJobsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
