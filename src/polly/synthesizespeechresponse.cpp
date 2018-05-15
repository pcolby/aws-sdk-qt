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

#include "synthesizespeechresponse.h"
#include "synthesizespeechresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::SynthesizeSpeechResponse
 * \brief The SynthesizeSpeechResponse class provides an interace for Polly SynthesizeSpeech responses.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::synthesizeSpeech
 */

/*!
 * Constructs a SynthesizeSpeechResponse object for \a reply to \a request, with parent \a parent.
 */
SynthesizeSpeechResponse::SynthesizeSpeechResponse(
        const SynthesizeSpeechRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new SynthesizeSpeechResponsePrivate(this), parent)
{
    setRequest(new SynthesizeSpeechRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SynthesizeSpeechRequest * SynthesizeSpeechResponse::request() const
{
    Q_D(const SynthesizeSpeechResponse);
    return static_cast<const SynthesizeSpeechRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly SynthesizeSpeech \a response.
 */
void SynthesizeSpeechResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SynthesizeSpeechResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::SynthesizeSpeechResponsePrivate
 * \brief The SynthesizeSpeechResponsePrivate class provides private implementation for SynthesizeSpeechResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a SynthesizeSpeechResponsePrivate object with public implementation \a q.
 */
SynthesizeSpeechResponsePrivate::SynthesizeSpeechResponsePrivate(
    SynthesizeSpeechResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly SynthesizeSpeech response element from \a xml.
 */
void SynthesizeSpeechResponsePrivate::parseSynthesizeSpeechResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SynthesizeSpeechResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
