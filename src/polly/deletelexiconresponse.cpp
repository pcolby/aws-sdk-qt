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
    Q_D(DeleteLexiconResponse);
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
    /// @todo
}

} // namespace Polly
} // namespace QtAws
