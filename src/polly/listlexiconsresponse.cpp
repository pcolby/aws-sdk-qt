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
    Q_D(ListLexiconsResponse);
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
    /// @todo
}

} // namespace Polly
} // namespace QtAws
