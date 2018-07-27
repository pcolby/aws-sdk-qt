/*
    Copyright 2013-2018 Paul Colby

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

#include "getfacesearchresponse.h"
#include "getfacesearchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetFaceSearchResponse
 * \brief The GetFaceSearchResponse class provides an interace for Rekognition GetFaceSearch responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getFaceSearch
 */

/*!
 * Constructs a GetFaceSearchResponse object for \a reply to \a request, with parent \a parent.
 */
GetFaceSearchResponse::GetFaceSearchResponse(
        const GetFaceSearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetFaceSearchResponsePrivate(this), parent)
{
    setRequest(new GetFaceSearchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFaceSearchRequest * GetFaceSearchResponse::request() const
{
    Q_D(const GetFaceSearchResponse);
    return static_cast<const GetFaceSearchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetFaceSearch \a response.
 */
void GetFaceSearchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFaceSearchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetFaceSearchResponsePrivate
 * \brief The GetFaceSearchResponsePrivate class provides private implementation for GetFaceSearchResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetFaceSearchResponsePrivate object with public implementation \a q.
 */
GetFaceSearchResponsePrivate::GetFaceSearchResponsePrivate(
    GetFaceSearchResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetFaceSearch response element from \a xml.
 */
void GetFaceSearchResponsePrivate::parseGetFaceSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFaceSearchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
