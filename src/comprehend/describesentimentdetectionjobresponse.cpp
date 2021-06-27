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

#include "describesentimentdetectionjobresponse.h"
#include "describesentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobResponse
 * \brief The DescribeSentimentDetectionJobResponse class provides an interace for Comprehend DescribeSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeSentimentDetectionJob
 */

/*!
 * Constructs a DescribeSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSentimentDetectionJobResponse::DescribeSentimentDetectionJobResponse(
        const DescribeSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSentimentDetectionJobRequest * DescribeSentimentDetectionJobResponse::request() const
{
    return static_cast<const DescribeSentimentDetectionJobRequest *>(ComprehendResponse::request());
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeSentimentDetectionJob \a response.
 */
void DescribeSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobResponsePrivate
 * \brief The DescribeSentimentDetectionJobResponsePrivate class provides private implementation for DescribeSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeSentimentDetectionJobResponsePrivate::DescribeSentimentDetectionJobResponsePrivate(
    DescribeSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeSentimentDetectionJob response element from \a xml.
 */
void DescribeSentimentDetectionJobResponsePrivate::parseDescribeSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
