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

#include "getcelebrityrecognitionresponse.h"
#include "getcelebrityrecognitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetCelebrityRecognitionResponse
 * \brief The GetCelebrityRecognitionResponse class provides an interace for Rekognition GetCelebrityRecognition responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getCelebrityRecognition
 */

/*!
 * Constructs a GetCelebrityRecognitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCelebrityRecognitionResponse::GetCelebrityRecognitionResponse(
        const GetCelebrityRecognitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetCelebrityRecognitionResponsePrivate(this), parent)
{
    setRequest(new GetCelebrityRecognitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCelebrityRecognitionRequest * GetCelebrityRecognitionResponse::request() const
{
    return static_cast<const GetCelebrityRecognitionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition GetCelebrityRecognition \a response.
 */
void GetCelebrityRecognitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCelebrityRecognitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetCelebrityRecognitionResponsePrivate
 * \brief The GetCelebrityRecognitionResponsePrivate class provides private implementation for GetCelebrityRecognitionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetCelebrityRecognitionResponsePrivate object with public implementation \a q.
 */
GetCelebrityRecognitionResponsePrivate::GetCelebrityRecognitionResponsePrivate(
    GetCelebrityRecognitionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetCelebrityRecognition response element from \a xml.
 */
void GetCelebrityRecognitionResponsePrivate::parseGetCelebrityRecognitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCelebrityRecognitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
