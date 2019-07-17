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

#include "createhyperparametertuningjobresponse.h"
#include "createhyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateHyperParameterTuningJobResponse
 * \brief The CreateHyperParameterTuningJobResponse class provides an interace for SageMaker CreateHyperParameterTuningJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createHyperParameterTuningJob
 */

/*!
 * Constructs a CreateHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHyperParameterTuningJobResponse::CreateHyperParameterTuningJobResponse(
        const CreateHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new CreateHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHyperParameterTuningJobRequest * CreateHyperParameterTuningJobResponse::request() const
{
    Q_D(const CreateHyperParameterTuningJobResponse);
    return static_cast<const CreateHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateHyperParameterTuningJob \a response.
 */
void CreateHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateHyperParameterTuningJobResponsePrivate
 * \brief The CreateHyperParameterTuningJobResponsePrivate class provides private implementation for CreateHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
CreateHyperParameterTuningJobResponsePrivate::CreateHyperParameterTuningJobResponsePrivate(
    CreateHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateHyperParameterTuningJob response element from \a xml.
 */
void CreateHyperParameterTuningJobResponsePrivate::parseCreateHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
