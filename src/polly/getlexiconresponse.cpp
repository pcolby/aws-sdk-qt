// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlexiconresponse.h"
#include "getlexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::GetLexiconResponse
 * \brief The GetLexiconResponse class provides an interace for Polly GetLexicon responses.
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
 * \sa PollyClient::getLexicon
 */

/*!
 * Constructs a GetLexiconResponse object for \a reply to \a request, with parent \a parent.
 */
GetLexiconResponse::GetLexiconResponse(
        const GetLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new GetLexiconResponsePrivate(this), parent)
{
    setRequest(new GetLexiconRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLexiconRequest * GetLexiconResponse::request() const
{
    Q_D(const GetLexiconResponse);
    return static_cast<const GetLexiconRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly GetLexicon \a response.
 */
void GetLexiconResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLexiconResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::GetLexiconResponsePrivate
 * \brief The GetLexiconResponsePrivate class provides private implementation for GetLexiconResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a GetLexiconResponsePrivate object with public implementation \a q.
 */
GetLexiconResponsePrivate::GetLexiconResponsePrivate(
    GetLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly GetLexicon response element from \a xml.
 */
void GetLexiconResponsePrivate::parseGetLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLexiconResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
