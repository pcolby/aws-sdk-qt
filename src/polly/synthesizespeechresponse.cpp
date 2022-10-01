// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
