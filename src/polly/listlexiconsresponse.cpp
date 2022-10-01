// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlexiconsresponse.h"
#include "listlexiconsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::ListLexiconsResponse
 * \brief The ListLexiconsResponse class provides an interace for Polly ListLexicons responses.
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
 * \sa PollyClient::listLexicons
 */

/*!
 * Constructs a ListLexiconsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLexiconsResponse::ListLexiconsResponse(
        const ListLexiconsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new ListLexiconsResponsePrivate(this), parent)
{
    setRequest(new ListLexiconsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLexiconsRequest * ListLexiconsResponse::request() const
{
    Q_D(const ListLexiconsResponse);
    return static_cast<const ListLexiconsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly ListLexicons \a response.
 */
void ListLexiconsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLexiconsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::ListLexiconsResponsePrivate
 * \brief The ListLexiconsResponsePrivate class provides private implementation for ListLexiconsResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a ListLexiconsResponsePrivate object with public implementation \a q.
 */
ListLexiconsResponsePrivate::ListLexiconsResponsePrivate(
    ListLexiconsResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly ListLexicons response element from \a xml.
 */
void ListLexiconsResponsePrivate::parseListLexiconsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLexiconsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
