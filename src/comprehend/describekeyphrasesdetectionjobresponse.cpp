/*
    Copyright 2013-2018 Paul Colby

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

#include "describekeyphrasesdetectionjobresponse.h"
#include "describekeyphrasesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobResponse
 * \brief The DescribeKeyPhrasesDetectionJobResponse class provides an interace for Comprehend DescribeKeyPhrasesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeKeyPhrasesDetectionJob
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeKeyPhrasesDetectionJobResponse::DescribeKeyPhrasesDetectionJobResponse(
        const DescribeKeyPhrasesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeKeyPhrasesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeKeyPhrasesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeKeyPhrasesDetectionJobRequest * DescribeKeyPhrasesDetectionJobResponse::request() const
{
    Q_D(const DescribeKeyPhrasesDetectionJobResponse);
    return static_cast<const DescribeKeyPhrasesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeKeyPhrasesDetectionJob \a response.
 */
void DescribeKeyPhrasesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeKeyPhrasesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobResponsePrivate
 * \brief The DescribeKeyPhrasesDetectionJobResponsePrivate class provides private implementation for DescribeKeyPhrasesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeKeyPhrasesDetectionJobResponsePrivate::DescribeKeyPhrasesDetectionJobResponsePrivate(
    DescribeKeyPhrasesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeKeyPhrasesDetectionJob response element from \a xml.
 */
void DescribeKeyPhrasesDetectionJobResponsePrivate::parseDescribeKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeKeyPhrasesDetectionJobResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
