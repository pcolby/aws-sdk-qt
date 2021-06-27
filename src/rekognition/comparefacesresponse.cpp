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

#include "comparefacesresponse.h"
#include "comparefacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CompareFacesResponse
 * \brief The CompareFacesResponse class provides an interace for Rekognition CompareFaces responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::compareFaces
 */

/*!
 * Constructs a CompareFacesResponse object for \a reply to \a request, with parent \a parent.
 */
CompareFacesResponse::CompareFacesResponse(
        const CompareFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CompareFacesResponsePrivate(this), parent)
{
    setRequest(new CompareFacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompareFacesRequest * CompareFacesResponse::request() const
{
    return static_cast<const CompareFacesRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition CompareFaces \a response.
 */
void CompareFacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompareFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::CompareFacesResponsePrivate
 * \brief The CompareFacesResponsePrivate class provides private implementation for CompareFacesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CompareFacesResponsePrivate object with public implementation \a q.
 */
CompareFacesResponsePrivate::CompareFacesResponsePrivate(
    CompareFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition CompareFaces response element from \a xml.
 */
void CompareFacesResponsePrivate::parseCompareFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompareFacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
