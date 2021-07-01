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

#include "stopprojectversionresponse.h"
#include "stopprojectversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StopProjectVersionResponse
 * \brief The StopProjectVersionResponse class provides an interace for Rekognition StopProjectVersion responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::stopProjectVersion
 */

/*!
 * Constructs a StopProjectVersionResponse object for \a reply to \a request, with parent \a parent.
 */
StopProjectVersionResponse::StopProjectVersionResponse(
        const StopProjectVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StopProjectVersionResponsePrivate(this), parent)
{
    setRequest(new StopProjectVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopProjectVersionRequest * StopProjectVersionResponse::request() const
{
    Q_D(const StopProjectVersionResponse);
    return static_cast<const StopProjectVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StopProjectVersion \a response.
 */
void StopProjectVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopProjectVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StopProjectVersionResponsePrivate
 * \brief The StopProjectVersionResponsePrivate class provides private implementation for StopProjectVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StopProjectVersionResponsePrivate object with public implementation \a q.
 */
StopProjectVersionResponsePrivate::StopProjectVersionResponsePrivate(
    StopProjectVersionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StopProjectVersion response element from \a xml.
 */
void StopProjectVersionResponsePrivate::parseStopProjectVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopProjectVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
