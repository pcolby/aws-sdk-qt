/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "indexfacesresponse.h"
#include "indexfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::IndexFacesResponse
 * \brief The IndexFacesResponse class provides an interace for Rekognition IndexFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::indexFaces
 */

/*!
 * Constructs a IndexFacesResponse object for \a reply to \a request, with parent \a parent.
 */
IndexFacesResponse::IndexFacesResponse(
        const IndexFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new IndexFacesResponsePrivate(this), parent)
{
    setRequest(new IndexFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IndexFacesRequest * IndexFacesResponse::request() const
{
    Q_D(const IndexFacesResponse);
    return static_cast<const IndexFacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition IndexFaces \a response.
 */
void IndexFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(IndexFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::IndexFacesResponsePrivate
 * \brief The IndexFacesResponsePrivate class provides private implementation for IndexFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a IndexFacesResponsePrivate object with public implementation \a q.
 */
IndexFacesResponsePrivate::IndexFacesResponsePrivate(
    IndexFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition IndexFaces response element from \a xml.
 */
void IndexFacesResponsePrivate::parseIndexFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IndexFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
