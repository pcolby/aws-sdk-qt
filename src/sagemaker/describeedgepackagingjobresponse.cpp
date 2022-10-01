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

#include "describeedgepackagingjobresponse.h"
#include "describeedgepackagingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEdgePackagingJobResponse
 * \brief The DescribeEdgePackagingJobResponse class provides an interace for SageMaker DescribeEdgePackagingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeEdgePackagingJob
 */

/*!
 * Constructs a DescribeEdgePackagingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEdgePackagingJobResponse::DescribeEdgePackagingJobResponse(
        const DescribeEdgePackagingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEdgePackagingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeEdgePackagingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEdgePackagingJobRequest * DescribeEdgePackagingJobResponse::request() const
{
    Q_D(const DescribeEdgePackagingJobResponse);
    return static_cast<const DescribeEdgePackagingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeEdgePackagingJob \a response.
 */
void DescribeEdgePackagingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEdgePackagingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeEdgePackagingJobResponsePrivate
 * \brief The DescribeEdgePackagingJobResponsePrivate class provides private implementation for DescribeEdgePackagingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEdgePackagingJobResponsePrivate object with public implementation \a q.
 */
DescribeEdgePackagingJobResponsePrivate::DescribeEdgePackagingJobResponsePrivate(
    DescribeEdgePackagingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeEdgePackagingJob response element from \a xml.
 */
void DescribeEdgePackagingJobResponsePrivate::parseDescribeEdgePackagingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEdgePackagingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
