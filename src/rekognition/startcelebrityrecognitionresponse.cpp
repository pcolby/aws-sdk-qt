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

#include "startcelebrityrecognitionresponse.h"
#include "startcelebrityrecognitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartCelebrityRecognitionResponse
 * \brief The StartCelebrityRecognitionResponse class provides an interace for Rekognition StartCelebrityRecognition responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startCelebrityRecognition
 */

/*!
 * Constructs a StartCelebrityRecognitionResponse object for \a reply to \a request, with parent \a parent.
 */
StartCelebrityRecognitionResponse::StartCelebrityRecognitionResponse(
        const StartCelebrityRecognitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartCelebrityRecognitionResponsePrivate(this), parent)
{
    setRequest(new StartCelebrityRecognitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCelebrityRecognitionRequest * StartCelebrityRecognitionResponse::request() const
{
    Q_D(const StartCelebrityRecognitionResponse);
    return static_cast<const StartCelebrityRecognitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StartCelebrityRecognition \a response.
 */
void StartCelebrityRecognitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCelebrityRecognitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartCelebrityRecognitionResponsePrivate
 * \brief The StartCelebrityRecognitionResponsePrivate class provides private implementation for StartCelebrityRecognitionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartCelebrityRecognitionResponsePrivate object with public implementation \a q.
 */
StartCelebrityRecognitionResponsePrivate::StartCelebrityRecognitionResponsePrivate(
    StartCelebrityRecognitionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartCelebrityRecognition response element from \a xml.
 */
void StartCelebrityRecognitionResponsePrivate::parseStartCelebrityRecognitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCelebrityRecognitionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
