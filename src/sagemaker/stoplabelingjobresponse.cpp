/*
    Copyright 2013-2020 Paul Colby

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

#include "stoplabelingjobresponse.h"
#include "stoplabelingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopLabelingJobResponse
 * \brief The StopLabelingJobResponse class provides an interace for SageMaker StopLabelingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::stopLabelingJob
 */

/*!
 * Constructs a StopLabelingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopLabelingJobResponse::StopLabelingJobResponse(
        const StopLabelingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopLabelingJobResponsePrivate(this), parent)
{
    setRequest(new StopLabelingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopLabelingJobRequest * StopLabelingJobResponse::request() const
{
    Q_D(const StopLabelingJobResponse);
    return static_cast<const StopLabelingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopLabelingJob \a response.
 */
void StopLabelingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopLabelingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopLabelingJobResponsePrivate
 * \brief The StopLabelingJobResponsePrivate class provides private implementation for StopLabelingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopLabelingJobResponsePrivate object with public implementation \a q.
 */
StopLabelingJobResponsePrivate::StopLabelingJobResponsePrivate(
    StopLabelingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopLabelingJob response element from \a xml.
 */
void StopLabelingJobResponsePrivate::parseStopLabelingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopLabelingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
