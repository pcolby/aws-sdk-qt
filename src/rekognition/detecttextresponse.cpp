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

#include "detecttextresponse.h"
#include "detecttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectTextResponse
 * \brief The DetectTextResponse class provides an interace for Rekognition DetectText responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectText
 */

/*!
 * Constructs a DetectTextResponse object for \a reply to \a request, with parent \a parent.
 */
DetectTextResponse::DetectTextResponse(
        const DetectTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectTextResponsePrivate(this), parent)
{
    setRequest(new DetectTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectTextRequest * DetectTextResponse::request() const
{
    return static_cast<const DetectTextRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectText \a response.
 */
void DetectTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectTextResponsePrivate
 * \brief The DetectTextResponsePrivate class provides private implementation for DetectTextResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectTextResponsePrivate object with public implementation \a q.
 */
DetectTextResponsePrivate::DetectTextResponsePrivate(
    DetectTextResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectText response element from \a xml.
 */
void DetectTextResponsePrivate::parseDetectTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
