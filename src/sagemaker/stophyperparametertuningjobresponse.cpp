/*
    Copyright 2013-2019 Paul Colby

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

#include "stophyperparametertuningjobresponse.h"
#include "stophyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobResponse
 * \brief The StopHyperParameterTuningJobResponse class provides an interace for SageMaker StopHyperParameterTuningJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::stopHyperParameterTuningJob
 */

/*!
 * Constructs a StopHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopHyperParameterTuningJobResponse::StopHyperParameterTuningJobResponse(
        const StopHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new StopHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopHyperParameterTuningJobRequest * StopHyperParameterTuningJobResponse::request() const
{
    Q_D(const StopHyperParameterTuningJobResponse);
    return static_cast<const StopHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopHyperParameterTuningJob \a response.
 */
void StopHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobResponsePrivate
 * \brief The StopHyperParameterTuningJobResponsePrivate class provides private implementation for StopHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
StopHyperParameterTuningJobResponsePrivate::StopHyperParameterTuningJobResponsePrivate(
    StopHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopHyperParameterTuningJob response element from \a xml.
 */
void StopHyperParameterTuningJobResponsePrivate::parseStopHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
