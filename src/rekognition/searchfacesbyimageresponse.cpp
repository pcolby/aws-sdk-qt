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

#include "searchfacesbyimageresponse.h"
#include "searchfacesbyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::SearchFacesByImageResponse
 * \brief The SearchFacesByImageResponse class provides an interace for Rekognition SearchFacesByImage responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::searchFacesByImage
 */

/*!
 * Constructs a SearchFacesByImageResponse object for \a reply to \a request, with parent \a parent.
 */
SearchFacesByImageResponse::SearchFacesByImageResponse(
        const SearchFacesByImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new SearchFacesByImageResponsePrivate(this), parent)
{
    setRequest(new SearchFacesByImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchFacesByImageRequest * SearchFacesByImageResponse::request() const
{
    Q_D(const SearchFacesByImageResponse);
    return static_cast<const SearchFacesByImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition SearchFacesByImage \a response.
 */
void SearchFacesByImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(SearchFacesByImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::SearchFacesByImageResponsePrivate
 * \brief The SearchFacesByImageResponsePrivate class provides private implementation for SearchFacesByImageResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a SearchFacesByImageResponsePrivate object with public implementation \a q.
 */
SearchFacesByImageResponsePrivate::SearchFacesByImageResponsePrivate(
    SearchFacesByImageResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition SearchFacesByImage response element from \a xml.
 */
void SearchFacesByImageResponsePrivate::parseSearchFacesByImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFacesByImageResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
