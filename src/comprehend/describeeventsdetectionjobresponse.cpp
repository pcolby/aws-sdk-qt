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
    return static_cast<const DescribeEventsDetectionJobRequest *>(ComprehendResponse::request());
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
