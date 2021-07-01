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

#include "detectfacesresponse.h"
#include "detectfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectFacesResponse
 * \brief The DetectFacesResponse class provides an interace for Rekognition DetectFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectFaces
 */

/*!
 * Constructs a DetectFacesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectFacesResponse::DetectFacesResponse(
        const DetectFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectFacesResponsePrivate(this), parent)
{
    setRequest(new DetectFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectFacesRequest * DetectFacesResponse::request() const
{
    Q_D(const DetectFacesResponse);
    return static_cast<const DetectFacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectFaces \a response.
 */
void DetectFacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectFacesResponsePrivate
 * \brief The DetectFacesResponsePrivate class provides private implementation for DetectFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectFacesResponsePrivate object with public implementation \a q.
 */
DetectFacesResponsePrivate::DetectFacesResponsePrivate(
    DetectFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectFaces response element from \a xml.
 */
void DetectFacesResponsePrivate::parseDetectFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectFacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
