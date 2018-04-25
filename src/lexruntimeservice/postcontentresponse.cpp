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

#include "postcontentresponse.h"
#include "postcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::PostContentResponse
 * \brief The PostContentResponse class provides an interace for LexRuntimeService PostContent responses.
 *
 * \inmodule QtAwsLexRuntimeService
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeServiceClient::postContent
 */

/*!
 * Constructs a PostContentResponse object for \a reply to \a request, with parent \a parent.
 */
PostContentResponse::PostContentResponse(
        const PostContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeServiceResponse(new PostContentResponsePrivate(this), parent)
{
    setRequest(new PostContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PostContentRequest * PostContentResponse::request() const
{
    Q_D(const PostContentResponse);
    return static_cast<const PostContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeService PostContent \a response.
 */
void PostContentResponse::parseSuccess(QIODevice &response)
{
    Q_D(PostContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeService::PostContentResponsePrivate
 * \brief The PostContentResponsePrivate class provides private implementation for PostContentResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * Constructs a PostContentResponsePrivate object with public implementation \a q.
 */
PostContentResponsePrivate::PostContentResponsePrivate(
    PostContentResponse * const q) : LexRuntimeServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeService PostContent response element from \a xml.
 */
void PostContentResponsePrivate::parsePostContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostContentResponse"));
    /// @todo
}

} // namespace LexRuntimeService
} // namespace QtAws
