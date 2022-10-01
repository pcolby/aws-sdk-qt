// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobsresponse.h"
#include "describejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeJobsResponse
 * \brief The DescribeJobsResponse class provides an interace for Mgn DescribeJobs responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeJobs
 */

/*!
 * Constructs a DescribeJobsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobsResponse::DescribeJobsResponse(
        const DescribeJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DescribeJobsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobsRequest * DescribeJobsResponse::request() const
{
    Q_D(const DescribeJobsResponse);
    return static_cast<const DescribeJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DescribeJobs \a response.
 */
void DescribeJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DescribeJobsResponsePrivate
 * \brief The DescribeJobsResponsePrivate class provides private implementation for DescribeJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeJobsResponsePrivate object with public implementation \a q.
 */
DescribeJobsResponsePrivate::DescribeJobsResponsePrivate(
    DescribeJobsResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DescribeJobs response element from \a xml.
 */
void DescribeJobsResponsePrivate::parseDescribeJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
