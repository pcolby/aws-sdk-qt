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

#include "deletemodelpackageresponse.h"
#include "deletemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageResponse
 * \brief The DeleteModelPackageResponse class provides an interace for SageMaker DeleteModelPackage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteModelPackage
 */

/*!
 * Constructs a DeleteModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelPackageResponse::DeleteModelPackageResponse(
        const DeleteModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelPackageResponsePrivate(this), parent)
{
    setRequest(new DeleteModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelPackageRequest * DeleteModelPackageResponse::request() const
{
    Q_D(const DeleteModelPackageResponse);
    return static_cast<const DeleteModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelPackage \a response.
 */
void DeleteModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageResponsePrivate
 * \brief The DeleteModelPackageResponsePrivate class provides private implementation for DeleteModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageResponsePrivate object with public implementation \a q.
 */
DeleteModelPackageResponsePrivate::DeleteModelPackageResponsePrivate(
    DeleteModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelPackage response element from \a xml.
 */
void DeleteModelPackageResponsePrivate::parseDeleteModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
