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

#include "deleteobjectsoncancelresponse.h"
#include "deleteobjectsoncancelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelResponse
 * \brief The DeleteObjectsOnCancelResponse class provides an interace for LakeFormation DeleteObjectsOnCancel responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteObjectsOnCancel
 */

/*!
 * Constructs a DeleteObjectsOnCancelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectsOnCancelResponse::DeleteObjectsOnCancelResponse(
        const DeleteObjectsOnCancelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteObjectsOnCancelResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectsOnCancelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectsOnCancelRequest * DeleteObjectsOnCancelResponse::request() const
{
    Q_D(const DeleteObjectsOnCancelResponse);
    return static_cast<const DeleteObjectsOnCancelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteObjectsOnCancel \a response.
 */
void DeleteObjectsOnCancelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectsOnCancelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelResponsePrivate
 * \brief The DeleteObjectsOnCancelResponsePrivate class provides private implementation for DeleteObjectsOnCancelResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteObjectsOnCancelResponsePrivate object with public implementation \a q.
 */
DeleteObjectsOnCancelResponsePrivate::DeleteObjectsOnCancelResponsePrivate(
    DeleteObjectsOnCancelResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteObjectsOnCancel response element from \a xml.
 */
void DeleteObjectsOnCancelResponsePrivate::parseDeleteObjectsOnCancelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectsOnCancelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
