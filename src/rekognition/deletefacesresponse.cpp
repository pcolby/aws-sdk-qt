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

#include "deletefacesresponse.h"
#include "deletefacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteFacesResponse
 * \brief The DeleteFacesResponse class provides an interace for Rekognition DeleteFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteFaces
 */

/*!
 * Constructs a DeleteFacesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFacesResponse::DeleteFacesResponse(
        const DeleteFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteFacesResponsePrivate(this), parent)
{
    setRequest(new DeleteFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFacesRequest * DeleteFacesResponse::request() const
{
    return static_cast<const DeleteFacesRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition DeleteFaces \a response.
 */
void DeleteFacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DeleteFacesResponsePrivate
 * \brief The DeleteFacesResponsePrivate class provides private implementation for DeleteFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteFacesResponsePrivate object with public implementation \a q.
 */
DeleteFacesResponsePrivate::DeleteFacesResponsePrivate(
    DeleteFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DeleteFaces response element from \a xml.
 */
void DeleteFacesResponsePrivate::parseDeleteFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
