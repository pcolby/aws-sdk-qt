// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsdetectionjobresponse.h"
#include "describeeventsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEventsDetectionJobResponse
 * \brief The DescribeEventsDetectionJobResponse class provides an interace for Comprehend DescribeEventsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEventsDetectionJob
 */

/*!
 * Constructs a DescribeEventsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventsDetectionJobResponse::DescribeEventsDetectionJobResponse(
        const DescribeEventsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeEventsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeEventsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventsDetectionJobRequest * DescribeEventsDetectionJobResponse::request() const
{
    Q_D(const DescribeEventsDetectionJobResponse);
    return static_cast<const DescribeEventsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeEventsDetectionJob \a response.
 */
void DescribeEventsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeEventsDetectionJobResponsePrivate
 * \brief The DescribeEventsDetectionJobResponsePrivate class provides private implementation for DescribeEventsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEventsDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeEventsDetectionJobResponsePrivate::DescribeEventsDetectionJobResponsePrivate(
    DescribeEventsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeEventsDetectionJob response element from \a xml.
 */
void DescribeEventsDetectionJobResponsePrivate::parseDescribeEventsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
