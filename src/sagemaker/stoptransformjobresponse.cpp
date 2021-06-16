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

#include "stoptransformjobresponse.h"
#include "stoptransformjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTransformJobResponse
 * \brief The StopTransformJobResponse class provides an interace for SageMaker StopTransformJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::stopTransformJob
 */

/*!
 * Constructs a StopTransformJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTransformJobResponse::StopTransformJobResponse(
        const StopTransformJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopTransformJobResponsePrivate(this), parent)
{
    setRequest(new StopTransformJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTransformJobRequest * StopTransformJobResponse::request() const
{
    Q_D(const StopTransformJobResponse);
    return static_cast<const StopTransformJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopTransformJob \a response.
 */
void StopTransformJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTransformJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopTransformJobResponsePrivate
 * \brief The StopTransformJobResponsePrivate class provides private implementation for StopTransformJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTransformJobResponsePrivate object with public implementation \a q.
 */
StopTransformJobResponsePrivate::StopTransformJobResponsePrivate(
    StopTransformJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopTransformJob response element from \a xml.
 */
void StopTransformJobResponsePrivate::parseStopTransformJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTransformJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
