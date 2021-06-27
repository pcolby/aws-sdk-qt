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

#include "startcontentmoderationresponse.h"
#include "startcontentmoderationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartContentModerationResponse
 * \brief The StartContentModerationResponse class provides an interace for Rekognition StartContentModeration responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startContentModeration
 */

/*!
 * Constructs a StartContentModerationResponse object for \a reply to \a request, with parent \a parent.
 */
StartContentModerationResponse::StartContentModerationResponse(
        const StartContentModerationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartContentModerationResponsePrivate(this), parent)
{
    setRequest(new StartContentModerationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartContentModerationRequest * StartContentModerationResponse::request() const
{
    return static_cast<const StartContentModerationRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition StartContentModeration \a response.
 */
void StartContentModerationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartContentModerationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartContentModerationResponsePrivate
 * \brief The StartContentModerationResponsePrivate class provides private implementation for StartContentModerationResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartContentModerationResponsePrivate object with public implementation \a q.
 */
StartContentModerationResponsePrivate::StartContentModerationResponsePrivate(
    StartContentModerationResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartContentModeration response element from \a xml.
 */
void StartContentModerationResponsePrivate::parseStartContentModerationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartContentModerationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
