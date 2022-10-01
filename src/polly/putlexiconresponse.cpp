// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlexiconresponse.h"
#include "putlexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PutLexiconResponse
 * \brief The PutLexiconResponse class provides an interace for Polly PutLexicon responses.
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
 * \sa PollyClient::putLexicon
 */

/*!
 * Constructs a PutLexiconResponse object for \a reply to \a request, with parent \a parent.
 */
PutLexiconResponse::PutLexiconResponse(
        const PutLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new PutLexiconResponsePrivate(this), parent)
{
    setRequest(new PutLexiconRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLexiconRequest * PutLexiconResponse::request() const
{
    Q_D(const PutLexiconResponse);
    return static_cast<const PutLexiconRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly PutLexicon \a response.
 */
void PutLexiconResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLexiconResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::PutLexiconResponsePrivate
 * \brief The PutLexiconResponsePrivate class provides private implementation for PutLexiconResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PutLexiconResponsePrivate object with public implementation \a q.
 */
PutLexiconResponsePrivate::PutLexiconResponsePrivate(
    PutLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly PutLexicon response element from \a xml.
 */
void PutLexiconResponsePrivate::parsePutLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLexiconResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
