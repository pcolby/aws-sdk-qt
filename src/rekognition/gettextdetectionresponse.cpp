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

#include "gettextdetectionresponse.h"
#include "gettextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetTextDetectionResponse
 * \brief The GetTextDetectionResponse class provides an interace for Rekognition GetTextDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getTextDetection
 */

/*!
 * Constructs a GetTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetTextDetectionResponse::GetTextDetectionResponse(
        const GetTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetTextDetectionResponsePrivate(this), parent)
{
    setRequest(new GetTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTextDetectionRequest * GetTextDetectionResponse::request() const
{
    Q_D(const GetTextDetectionResponse);
    return static_cast<const GetTextDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetTextDetection \a response.
 */
void GetTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetTextDetectionResponsePrivate
 * \brief The GetTextDetectionResponsePrivate class provides private implementation for GetTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetTextDetectionResponsePrivate object with public implementation \a q.
 */
GetTextDetectionResponsePrivate::GetTextDetectionResponsePrivate(
    GetTextDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetTextDetection response element from \a xml.
 */
void GetTextDetectionResponsePrivate::parseGetTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
