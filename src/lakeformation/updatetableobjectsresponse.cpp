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

#include "updatetableobjectsresponse.h"
#include "updatetableobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsResponse
 * \brief The UpdateTableObjectsResponse class provides an interace for LakeFormation UpdateTableObjects responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateTableObjects
 */

/*!
 * Constructs a UpdateTableObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTableObjectsResponse::UpdateTableObjectsResponse(
        const UpdateTableObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateTableObjectsResponsePrivate(this), parent)
{
    setRequest(new UpdateTableObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTableObjectsRequest * UpdateTableObjectsResponse::request() const
{
    Q_D(const UpdateTableObjectsResponse);
    return static_cast<const UpdateTableObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateTableObjects \a response.
 */
void UpdateTableObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTableObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsResponsePrivate
 * \brief The UpdateTableObjectsResponsePrivate class provides private implementation for UpdateTableObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateTableObjectsResponsePrivate object with public implementation \a q.
 */
UpdateTableObjectsResponsePrivate::UpdateTableObjectsResponsePrivate(
    UpdateTableObjectsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateTableObjects response element from \a xml.
 */
void UpdateTableObjectsResponsePrivate::parseUpdateTableObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTableObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
