/*
    Copyright 2013-2020 Paul Colby

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

#include "describetopicsdetectionjobresponse.h"
#include "describetopicsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeTopicsDetectionJobResponse
 * \brief The DescribeTopicsDetectionJobResponse class provides an interace for Comprehend DescribeTopicsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeTopicsDetectionJob
 */

/*!
 * Constructs a DescribeTopicsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTopicsDetectionJobResponse::DescribeTopicsDetectionJobResponse(
        const DescribeTopicsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeTopicsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTopicsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTopicsDetectionJobRequest * DescribeTopicsDetectionJobResponse::request() const
{
    Q_D(const DescribeTopicsDetectionJobResponse);
    return static_cast<const DescribeTopicsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeTopicsDetectionJob \a response.
 */
void DescribeTopicsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTopicsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeTopicsDetectionJobResponsePrivate
 * \brief The DescribeTopicsDetectionJobResponsePrivate class provides private implementation for DescribeTopicsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeTopicsDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeTopicsDetectionJobResponsePrivate::DescribeTopicsDetectionJobResponsePrivate(
    DescribeTopicsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeTopicsDetectionJob response element from \a xml.
 */
void DescribeTopicsDetectionJobResponsePrivate::parseDescribeTopicsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTopicsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
