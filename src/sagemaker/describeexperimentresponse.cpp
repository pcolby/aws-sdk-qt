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
