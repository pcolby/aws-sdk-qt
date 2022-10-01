// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsresponse.h"
#include "listjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListJobsResponse
 * \brief The ListJobsResponse class provides an interace for Snowball ListJobs responses.
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
 * \sa SnowballClient::listJobs
 */

/*!
 * Constructs a ListJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobsResponse::ListJobsResponse(
        const ListJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListJobsResponsePrivate(this), parent)
{
    setRequest(new ListJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobsRequest * ListJobsResponse::request() const
{
    Q_D(const ListJobsResponse);
    return static_cast<const ListJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball ListJobs \a response.
 */
void ListJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::ListJobsResponsePrivate
 * \brief The ListJobsResponsePrivate class provides private implementation for ListJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListJobsResponsePrivate object with public implementation \a q.
 */
ListJobsResponsePrivate::ListJobsResponsePrivate(
    ListJobsResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball ListJobs response element from \a xml.
 */
void ListJobsResponsePrivate::parseListJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
