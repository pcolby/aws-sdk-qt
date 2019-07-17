/*
    Copyright 2013-2019 Paul Colby

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

#include "startfacesearchresponse.h"
#include "startfacesearchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartFaceSearchResponse
 * \brief The StartFaceSearchResponse class provides an interace for Rekognition StartFaceSearch responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startFaceSearch
 */

/*!
 * Constructs a StartFaceSearchResponse object for \a reply to \a request, with parent \a parent.
 */
StartFaceSearchResponse::StartFaceSearchResponse(
        const StartFaceSearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartFaceSearchResponsePrivate(this), parent)
{
    setRequest(new StartFaceSearchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFaceSearchRequest * StartFaceSearchResponse::request() const
{
    Q_D(const StartFaceSearchResponse);
    return static_cast<const StartFaceSearchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StartFaceSearch \a response.
 */
void StartFaceSearchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFaceSearchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartFaceSearchResponsePrivate
 * \brief The StartFaceSearchResponsePrivate class provides private implementation for StartFaceSearchResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartFaceSearchResponsePrivate object with public implementation \a q.
 */
StartFaceSearchResponsePrivate::StartFaceSearchResponsePrivate(
    StartFaceSearchResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartFaceSearch response element from \a xml.
 */
void StartFaceSearchResponsePrivate::parseStartFaceSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFaceSearchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
