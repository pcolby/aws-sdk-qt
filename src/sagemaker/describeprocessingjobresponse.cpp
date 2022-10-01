// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprocessingjobresponse.h"
#include "describeprocessingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeProcessingJobResponse
 * \brief The DescribeProcessingJobResponse class provides an interace for SageMaker DescribeProcessingJob responses.
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
 * \sa SageMakerClient::describeProcessingJob
 */

/*!
 * Constructs a DescribeProcessingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProcessingJobResponse::DescribeProcessingJobResponse(
        const DescribeProcessingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeProcessingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeProcessingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProcessingJobRequest * DescribeProcessingJobResponse::request() const
{
    Q_D(const DescribeProcessingJobResponse);
    return static_cast<const DescribeProcessingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeProcessingJob \a response.
 */
void DescribeProcessingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProcessingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeProcessingJobResponsePrivate
 * \brief The DescribeProcessingJobResponsePrivate class provides private implementation for DescribeProcessingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeProcessingJobResponsePrivate object with public implementation \a q.
 */
DescribeProcessingJobResponsePrivate::DescribeProcessingJobResponsePrivate(
    DescribeProcessingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeProcessingJob response element from \a xml.
 */
void DescribeProcessingJobResponsePrivate::parseDescribeProcessingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProcessingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
