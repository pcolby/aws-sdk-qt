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

#include "startpersontrackingresponse.h"
#include "startpersontrackingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartPersonTrackingResponse
 * \brief The StartPersonTrackingResponse class provides an interace for Rekognition StartPersonTracking responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startPersonTracking
 */

/*!
 * Constructs a StartPersonTrackingResponse object for \a reply to \a request, with parent \a parent.
 */
StartPersonTrackingResponse::StartPersonTrackingResponse(
        const StartPersonTrackingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartPersonTrackingResponsePrivate(this), parent)
{
    setRequest(new StartPersonTrackingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPersonTrackingRequest * StartPersonTrackingResponse::request() const
{
    return static_cast<const StartPersonTrackingRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition StartPersonTracking \a response.
 */
void StartPersonTrackingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPersonTrackingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartPersonTrackingResponsePrivate
 * \brief The StartPersonTrackingResponsePrivate class provides private implementation for StartPersonTrackingResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartPersonTrackingResponsePrivate object with public implementation \a q.
 */
StartPersonTrackingResponsePrivate::StartPersonTrackingResponsePrivate(
    StartPersonTrackingResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartPersonTracking response element from \a xml.
 */
void StartPersonTrackingResponsePrivate::parseStartPersonTrackingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPersonTrackingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
