// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehyperparametertuningjobresponse.h"
#include "describehyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobResponse
 * \brief The DescribeHyperParameterTuningJobResponse class provides an interace for SageMaker DescribeHyperParameterTuningJob responses.
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
 * \sa SageMakerClient::describeHyperParameterTuningJob
 */

/*!
 * Constructs a DescribeHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHyperParameterTuningJobResponse::DescribeHyperParameterTuningJobResponse(
        const DescribeHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new DescribeHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHyperParameterTuningJobRequest * DescribeHyperParameterTuningJobResponse::request() const
{
    Q_D(const DescribeHyperParameterTuningJobResponse);
    return static_cast<const DescribeHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeHyperParameterTuningJob \a response.
 */
void DescribeHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobResponsePrivate
 * \brief The DescribeHyperParameterTuningJobResponsePrivate class provides private implementation for DescribeHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
DescribeHyperParameterTuningJobResponsePrivate::DescribeHyperParameterTuningJobResponsePrivate(
    DescribeHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeHyperParameterTuningJob response element from \a xml.
 */
void DescribeHyperParameterTuningJobResponsePrivate::parseDescribeHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
