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

#include "describelabelingjobresponse.h"
#include "describelabelingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeLabelingJobResponse
 * \brief The DescribeLabelingJobResponse class provides an interace for SageMaker DescribeLabelingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeLabelingJob
 */

/*!
 * Constructs a DescribeLabelingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLabelingJobResponse::DescribeLabelingJobResponse(
        const DescribeLabelingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeLabelingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeLabelingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLabelingJobRequest * DescribeLabelingJobResponse::request() const
{
    Q_D(const DescribeLabelingJobResponse);
    return static_cast<const DescribeLabelingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeLabelingJob \a response.
 */
void DescribeLabelingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLabelingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeLabelingJobResponsePrivate
 * \brief The DescribeLabelingJobResponsePrivate class provides private implementation for DescribeLabelingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeLabelingJobResponsePrivate object with public implementation \a q.
 */
DescribeLabelingJobResponsePrivate::DescribeLabelingJobResponsePrivate(
    DescribeLabelingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeLabelingJob response element from \a xml.
 */
void DescribeLabelingJobResponsePrivate::parseDescribeLabelingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLabelingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
