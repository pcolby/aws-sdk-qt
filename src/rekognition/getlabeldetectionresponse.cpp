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

#include "getlabeldetectionresponse.h"
#include "getlabeldetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetLabelDetectionResponse
 * \brief The GetLabelDetectionResponse class provides an interace for Rekognition GetLabelDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getLabelDetection
 */

/*!
 * Constructs a GetLabelDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetLabelDetectionResponse::GetLabelDetectionResponse(
        const GetLabelDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetLabelDetectionResponsePrivate(this), parent)
{
    setRequest(new GetLabelDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLabelDetectionRequest * GetLabelDetectionResponse::request() const
{
    Q_D(const GetLabelDetectionResponse);
    return static_cast<const GetLabelDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetLabelDetection \a response.
 */
void GetLabelDetectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLabelDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetLabelDetectionResponsePrivate
 * \brief The GetLabelDetectionResponsePrivate class provides private implementation for GetLabelDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetLabelDetectionResponsePrivate object with public implementation \a q.
 */
GetLabelDetectionResponsePrivate::GetLabelDetectionResponsePrivate(
    GetLabelDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetLabelDetection response element from \a xml.
 */
void GetLabelDetectionResponsePrivate::parseGetLabelDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLabelDetectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
