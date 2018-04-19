/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stoptrainingjobresponse.h"
#include "stoptrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTrainingJobResponse
 * \brief The StopTrainingJobResponse class provides an interace for SageMaker StopTrainingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::stopTrainingJob
 */

/*!
 * Constructs a StopTrainingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTrainingJobResponse::StopTrainingJobResponse(
        const StopTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopTrainingJobResponsePrivate(this), parent)
{
    setRequest(new StopTrainingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTrainingJobRequest * StopTrainingJobResponse::request() const
{
    Q_D(const StopTrainingJobResponse);
    return static_cast<const StopTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopTrainingJob \a response.
 */
void StopTrainingJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopTrainingJobResponsePrivate
 * \brief The StopTrainingJobResponsePrivate class provides private implementation for StopTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTrainingJobResponsePrivate object with public implementation \a q.
 */
StopTrainingJobResponsePrivate::StopTrainingJobResponsePrivate(
    StopTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopTrainingJob response element from \a xml.
 */
void StopTrainingJobResponsePrivate::parseStopTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTrainingJobResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
