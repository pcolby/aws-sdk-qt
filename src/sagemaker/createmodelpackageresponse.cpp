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

#include "createmodelpackageresponse.h"
#include "createmodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageResponse
 * \brief The CreateModelPackageResponse class provides an interace for SageMaker CreateModelPackage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createModelPackage
 */

/*!
 * Constructs a CreateModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelPackageResponse::CreateModelPackageResponse(
        const CreateModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelPackageResponsePrivate(this), parent)
{
    setRequest(new CreateModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelPackageRequest * CreateModelPackageResponse::request() const
{
    Q_D(const CreateModelPackageResponse);
    return static_cast<const CreateModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelPackage \a response.
 */
void CreateModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageResponsePrivate
 * \brief The CreateModelPackageResponsePrivate class provides private implementation for CreateModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageResponsePrivate object with public implementation \a q.
 */
CreateModelPackageResponsePrivate::CreateModelPackageResponsePrivate(
    CreateModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelPackage response element from \a xml.
 */
void CreateModelPackageResponsePrivate::parseCreateModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
