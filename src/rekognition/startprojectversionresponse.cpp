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

#include "startprojectversionresponse.h"
#include "startprojectversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartProjectVersionResponse
 * \brief The StartProjectVersionResponse class provides an interace for Rekognition StartProjectVersion responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startProjectVersion
 */

/*!
 * Constructs a StartProjectVersionResponse object for \a reply to \a request, with parent \a parent.
 */
StartProjectVersionResponse::StartProjectVersionResponse(
        const StartProjectVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartProjectVersionResponsePrivate(this), parent)
{
    setRequest(new StartProjectVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartProjectVersionRequest * StartProjectVersionResponse::request() const
{
    return static_cast<const StartProjectVersionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition StartProjectVersion \a response.
 */
void StartProjectVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartProjectVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartProjectVersionResponsePrivate
 * \brief The StartProjectVersionResponsePrivate class provides private implementation for StartProjectVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartProjectVersionResponsePrivate object with public implementation \a q.
 */
StartProjectVersionResponsePrivate::StartProjectVersionResponsePrivate(
    StartProjectVersionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartProjectVersion response element from \a xml.
 */
void StartProjectVersionResponsePrivate::parseStartProjectVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartProjectVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
