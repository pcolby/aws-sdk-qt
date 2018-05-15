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

#include "searchfacesresponse.h"
#include "searchfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::SearchFacesResponse
 * \brief The SearchFacesResponse class provides an interace for Rekognition SearchFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::searchFaces
 */

/*!
 * Constructs a SearchFacesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchFacesResponse::SearchFacesResponse(
        const SearchFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new SearchFacesResponsePrivate(this), parent)
{
    setRequest(new SearchFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchFacesRequest * SearchFacesResponse::request() const
{
    Q_D(const SearchFacesResponse);
    return static_cast<const SearchFacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition SearchFaces \a response.
 */
void SearchFacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::SearchFacesResponsePrivate
 * \brief The SearchFacesResponsePrivate class provides private implementation for SearchFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a SearchFacesResponsePrivate object with public implementation \a q.
 */
SearchFacesResponsePrivate::SearchFacesResponsePrivate(
    SearchFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition SearchFaces response element from \a xml.
 */
void SearchFacesResponsePrivate::parseSearchFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
