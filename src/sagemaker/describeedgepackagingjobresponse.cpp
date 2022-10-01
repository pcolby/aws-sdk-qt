// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
