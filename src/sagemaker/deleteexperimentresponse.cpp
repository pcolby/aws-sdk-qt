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

#include "deleteexperimentresponse.h"
#include "deleteexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteExperimentResponse
 * \brief The DeleteExperimentResponse class provides an interace for SageMaker DeleteExperiment responses.
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
 * \sa SageMakerClient::deleteExperiment
 */

/*!
 * Constructs a DeleteExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperimentResponse::DeleteExperimentResponse(
        const DeleteExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteExperimentResponsePrivate(this), parent)
{
    setRequest(new DeleteExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperimentRequest * DeleteExperimentResponse::request() const
{
    Q_D(const DeleteExperimentResponse);
    return static_cast<const DeleteExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteExperiment \a response.
 */
void DeleteExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteExperimentResponsePrivate
 * \brief The DeleteExperimentResponsePrivate class provides private implementation for DeleteExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteExperimentResponsePrivate object with public implementation \a q.
 */
DeleteExperimentResponsePrivate::DeleteExperimentResponsePrivate(
    DeleteExperimentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteExperiment response element from \a xml.
 */
void DeleteExperimentResponsePrivate::parseDeleteExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
