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

#include "getcelebrityinforesponse.h"
#include "getcelebrityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetCelebrityInfoResponse
 * \brief The GetCelebrityInfoResponse class provides an interace for Rekognition GetCelebrityInfo responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getCelebrityInfo
 */

/*!
 * Constructs a GetCelebrityInfoResponse object for \a reply to \a request, with parent \a parent.
 */
GetCelebrityInfoResponse::GetCelebrityInfoResponse(
        const GetCelebrityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetCelebrityInfoResponsePrivate(this), parent)
{
    setRequest(new GetCelebrityInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCelebrityInfoRequest * GetCelebrityInfoResponse::request() const
{
    return static_cast<const GetCelebrityInfoRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition GetCelebrityInfo \a response.
 */
void GetCelebrityInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCelebrityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetCelebrityInfoResponsePrivate
 * \brief The GetCelebrityInfoResponsePrivate class provides private implementation for GetCelebrityInfoResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetCelebrityInfoResponsePrivate object with public implementation \a q.
 */
GetCelebrityInfoResponsePrivate::GetCelebrityInfoResponsePrivate(
    GetCelebrityInfoResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetCelebrityInfo response element from \a xml.
 */
void GetCelebrityInfoResponsePrivate::parseGetCelebrityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCelebrityInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
