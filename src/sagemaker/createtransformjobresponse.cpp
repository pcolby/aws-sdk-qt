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

#include "createtransformjobresponse.h"
#include "createtransformjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTransformJobResponse
 * \brief The CreateTransformJobResponse class provides an interace for SageMaker CreateTransformJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createTransformJob
 */

/*!
 * Constructs a CreateTransformJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransformJobResponse::CreateTransformJobResponse(
        const CreateTransformJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTransformJobResponsePrivate(this), parent)
{
    setRequest(new CreateTransformJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransformJobRequest * CreateTransformJobResponse::request() const
{
    Q_D(const CreateTransformJobResponse);
    return static_cast<const CreateTransformJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTransformJob \a response.
 */
void CreateTransformJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransformJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTransformJobResponsePrivate
 * \brief The CreateTransformJobResponsePrivate class provides private implementation for CreateTransformJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTransformJobResponsePrivate object with public implementation \a q.
 */
CreateTransformJobResponsePrivate::CreateTransformJobResponsePrivate(
    CreateTransformJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTransformJob response element from \a xml.
 */
void CreateTransformJobResponsePrivate::parseCreateTransformJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransformJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
