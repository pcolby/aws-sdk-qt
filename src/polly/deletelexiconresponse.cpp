// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelexiconresponse.h"
#include "deletelexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DeleteLexiconResponse
 * \brief The DeleteLexiconResponse class provides an interace for Polly DeleteLexicon responses.
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
 * \sa PollyClient::deleteLexicon
 */

/*!
 * Constructs a DeleteLexiconResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLexiconResponse::DeleteLexiconResponse(
        const DeleteLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new DeleteLexiconResponsePrivate(this), parent)
{
    setRequest(new DeleteLexiconRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLexiconRequest * DeleteLexiconResponse::request() const
{
    Q_D(const DeleteLexiconResponse);
    return static_cast<const DeleteLexiconRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly DeleteLexicon \a response.
 */
void DeleteLexiconResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLexiconResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::DeleteLexiconResponsePrivate
 * \brief The DeleteLexiconResponsePrivate class provides private implementation for DeleteLexiconResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a DeleteLexiconResponsePrivate object with public implementation \a q.
 */
DeleteLexiconResponsePrivate::DeleteLexiconResponsePrivate(
    DeleteLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly DeleteLexicon response element from \a xml.
 */
void DeleteLexiconResponsePrivate::parseDeleteLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLexiconResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
