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

#include "deletelftagresponse.h"
#include "deletelftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteLFTagResponse
 * \brief The DeleteLFTagResponse class provides an interace for LakeFormation DeleteLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::deleteLFTag
 */

/*!
 * Constructs a DeleteLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLFTagResponse::DeleteLFTagResponse(
        const DeleteLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteLFTagResponsePrivate(this), parent)
{
    setRequest(new DeleteLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLFTagRequest * DeleteLFTagResponse::request() const
{
    Q_D(const DeleteLFTagResponse);
    return static_cast<const DeleteLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteLFTag \a response.
 */
void DeleteLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteLFTagResponsePrivate
 * \brief The DeleteLFTagResponsePrivate class provides private implementation for DeleteLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteLFTagResponsePrivate object with public implementation \a q.
 */
DeleteLFTagResponsePrivate::DeleteLFTagResponsePrivate(
    DeleteLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteLFTag response element from \a xml.
 */
void DeleteLFTagResponsePrivate::parseDeleteLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
