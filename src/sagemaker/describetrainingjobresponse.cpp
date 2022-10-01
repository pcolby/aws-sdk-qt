// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrainingjobresponse.h"
#include "describetrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobResponse
 * \brief The DescribeTrainingJobResponse class provides an interace for SageMaker DescribeTrainingJob responses.
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
 * \sa SageMakerClient::describeTrainingJob
 */

/*!
 * Constructs a DescribeTrainingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrainingJobResponse::DescribeTrainingJobResponse(
        const DescribeTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrainingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTrainingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrainingJobRequest * DescribeTrainingJobResponse::request() const
{
    Q_D(const DescribeTrainingJobResponse);
    return static_cast<const DescribeTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrainingJob \a response.
 */
void DescribeTrainingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobResponsePrivate
 * \brief The DescribeTrainingJobResponsePrivate class provides private implementation for DescribeTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrainingJobResponsePrivate object with public implementation \a q.
 */
DescribeTrainingJobResponsePrivate::DescribeTrainingJobResponsePrivate(
    DescribeTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrainingJob response element from \a xml.
 */
void DescribeTrainingJobResponsePrivate::parseDescribeTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrainingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
