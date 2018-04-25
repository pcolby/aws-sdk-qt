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

#include "getpersontrackingresponse.h"
#include "getpersontrackingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetPersonTrackingResponse
 * \brief The GetPersonTrackingResponse class provides an interace for Rekognition GetPersonTracking responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getPersonTracking
 */

/*!
 * Constructs a GetPersonTrackingResponse object for \a reply to \a request, with parent \a parent.
 */
GetPersonTrackingResponse::GetPersonTrackingResponse(
        const GetPersonTrackingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetPersonTrackingResponsePrivate(this), parent)
{
    setRequest(new GetPersonTrackingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPersonTrackingRequest * GetPersonTrackingResponse::request() const
{
    Q_D(const GetPersonTrackingResponse);
    return static_cast<const GetPersonTrackingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetPersonTracking \a response.
 */
void GetPersonTrackingResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPersonTrackingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetPersonTrackingResponsePrivate
 * \brief The GetPersonTrackingResponsePrivate class provides private implementation for GetPersonTrackingResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetPersonTrackingResponsePrivate object with public implementation \a q.
 */
GetPersonTrackingResponsePrivate::GetPersonTrackingResponsePrivate(
    GetPersonTrackingResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetPersonTracking response element from \a xml.
 */
void GetPersonTrackingResponsePrivate::parseGetPersonTrackingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPersonTrackingResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
