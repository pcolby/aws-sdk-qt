/*
    Copyright 2013-2020 Paul Colby

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

#include "listfacesresponse.h"
#include "listfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListFacesResponse
 * \brief The ListFacesResponse class provides an interace for Rekognition ListFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listFaces
 */

/*!
 * Constructs a ListFacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListFacesResponse::ListFacesResponse(
        const ListFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListFacesResponsePrivate(this), parent)
{
    setRequest(new ListFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFacesRequest * ListFacesResponse::request() const
{
    Q_D(const ListFacesResponse);
    return static_cast<const ListFacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition ListFaces \a response.
 */
void ListFacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::ListFacesResponsePrivate
 * \brief The ListFacesResponsePrivate class provides private implementation for ListFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a ListFacesResponsePrivate object with public implementation \a q.
 */
ListFacesResponsePrivate::ListFacesResponsePrivate(
    ListFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition ListFaces response element from \a xml.
 */
void ListFacesResponsePrivate::parseListFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
