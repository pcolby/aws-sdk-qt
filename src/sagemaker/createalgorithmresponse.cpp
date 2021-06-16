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

#include "createalgorithmresponse.h"
#include "createalgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAlgorithmResponse
 * \brief The CreateAlgorithmResponse class provides an interace for SageMaker CreateAlgorithm responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createAlgorithm
 */

/*!
 * Constructs a CreateAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAlgorithmResponse::CreateAlgorithmResponse(
        const CreateAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateAlgorithmResponsePrivate(this), parent)
{
    setRequest(new CreateAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAlgorithmRequest * CreateAlgorithmResponse::request() const
{
    Q_D(const CreateAlgorithmResponse);
    return static_cast<const CreateAlgorithmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAlgorithm \a response.
 */
void CreateAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateAlgorithmResponsePrivate
 * \brief The CreateAlgorithmResponsePrivate class provides private implementation for CreateAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAlgorithmResponsePrivate object with public implementation \a q.
 */
CreateAlgorithmResponsePrivate::CreateAlgorithmResponsePrivate(
    CreateAlgorithmResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAlgorithm response element from \a xml.
 */
void CreateAlgorithmResponsePrivate::parseCreateAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
