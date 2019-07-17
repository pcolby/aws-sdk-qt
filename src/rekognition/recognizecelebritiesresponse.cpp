/*
    Copyright 2013-2019 Paul Colby

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

#include "recognizecelebritiesresponse.h"
#include "recognizecelebritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RecognizeCelebritiesResponse
 * \brief The RecognizeCelebritiesResponse class provides an interace for Rekognition RecognizeCelebrities responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::recognizeCelebrities
 */

/*!
 * Constructs a RecognizeCelebritiesResponse object for \a reply to \a request, with parent \a parent.
 */
RecognizeCelebritiesResponse::RecognizeCelebritiesResponse(
        const RecognizeCelebritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new RecognizeCelebritiesResponsePrivate(this), parent)
{
    setRequest(new RecognizeCelebritiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecognizeCelebritiesRequest * RecognizeCelebritiesResponse::request() const
{
    Q_D(const RecognizeCelebritiesResponse);
    return static_cast<const RecognizeCelebritiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition RecognizeCelebrities \a response.
 */
void RecognizeCelebritiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecognizeCelebritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::RecognizeCelebritiesResponsePrivate
 * \brief The RecognizeCelebritiesResponsePrivate class provides private implementation for RecognizeCelebritiesResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RecognizeCelebritiesResponsePrivate object with public implementation \a q.
 */
RecognizeCelebritiesResponsePrivate::RecognizeCelebritiesResponsePrivate(
    RecognizeCelebritiesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition RecognizeCelebrities response element from \a xml.
 */
void RecognizeCelebritiesResponsePrivate::parseRecognizeCelebritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeCelebritiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
