// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetransformjobresponse.h"
#include "describetransformjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTransformJobResponse
 * \brief The DescribeTransformJobResponse class provides an interace for SageMaker DescribeTransformJob responses.
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
 * \sa SageMakerClient::describeTransformJob
 */

/*!
 * Constructs a DescribeTransformJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTransformJobResponse::DescribeTransformJobResponse(
        const DescribeTransformJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTransformJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTransformJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTransformJobRequest * DescribeTransformJobResponse::request() const
{
    Q_D(const DescribeTransformJobResponse);
    return static_cast<const DescribeTransformJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTransformJob \a response.
 */
void DescribeTransformJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTransformJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTransformJobResponsePrivate
 * \brief The DescribeTransformJobResponsePrivate class provides private implementation for DescribeTransformJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTransformJobResponsePrivate object with public implementation \a q.
 */
DescribeTransformJobResponsePrivate::DescribeTransformJobResponsePrivate(
    DescribeTransformJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTransformJob response element from \a xml.
 */
void DescribeTransformJobResponsePrivate::parseDescribeTransformJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTransformJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
