// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexperimentresponse.h"
#include "describeexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeExperimentResponse
 * \brief The DescribeExperimentResponse class provides an interace for SageMaker DescribeExperiment responses.
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
 * \sa SageMakerClient::describeExperiment
 */

/*!
 * Constructs a DescribeExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExperimentResponse::DescribeExperimentResponse(
        const DescribeExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeExperimentResponsePrivate(this), parent)
{
    setRequest(new DescribeExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExperimentRequest * DescribeExperimentResponse::request() const
{
    Q_D(const DescribeExperimentResponse);
    return static_cast<const DescribeExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeExperiment \a response.
 */
void DescribeExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeExperimentResponsePrivate
 * \brief The DescribeExperimentResponsePrivate class provides private implementation for DescribeExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeExperimentResponsePrivate object with public implementation \a q.
 */
DescribeExperimentResponsePrivate::DescribeExperimentResponsePrivate(
    DescribeExperimentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeExperiment response element from \a xml.
 */
void DescribeExperimentResponsePrivate::parseDescribeExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
