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

#include "stopcompilationjobresponse.h"
#include "stopcompilationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopCompilationJobResponse
 * \brief The StopCompilationJobResponse class provides an interace for SageMaker StopCompilationJob responses.
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
 * \sa SageMakerClient::stopCompilationJob
 */

/*!
 * Constructs a StopCompilationJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopCompilationJobResponse::StopCompilationJobResponse(
        const StopCompilationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopCompilationJobResponsePrivate(this), parent)
{
    setRequest(new StopCompilationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCompilationJobRequest * StopCompilationJobResponse::request() const
{
    return static_cast<const StopCompilationJobRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker StopCompilationJob \a response.
 */
void StopCompilationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCompilationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopCompilationJobResponsePrivate
 * \brief The StopCompilationJobResponsePrivate class provides private implementation for StopCompilationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopCompilationJobResponsePrivate object with public implementation \a q.
 */
StopCompilationJobResponsePrivate::StopCompilationJobResponsePrivate(
    StopCompilationJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopCompilationJob response element from \a xml.
 */
void StopCompilationJobResponsePrivate::parseStopCompilationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCompilationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
