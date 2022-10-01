// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "postcontentresponse.h"
#include "postcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PostContentResponse
 * \brief The PostContentResponse class provides an interace for LexRuntime PostContent responses.
 *
 * \inmodule QtAwsLexRuntime
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeClient::postContent
 */

/*!
 * Constructs a PostContentResponse object for \a reply to \a request, with parent \a parent.
 */
PostContentResponse::PostContentResponse(
        const PostContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeResponse(new PostContentResponsePrivate(this), parent)
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
 * Parses a successful LexRuntime PostContent \a response.
 */
void PostContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PostContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntime::PostContentResponsePrivate
 * \brief The PostContentResponsePrivate class provides private implementation for PostContentResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PostContentResponsePrivate object with public implementation \a q.
 */
PostContentResponsePrivate::PostContentResponsePrivate(
    PostContentResponse * const q) : LexRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntime PostContent response element from \a xml.
 */
void PostContentResponsePrivate::parsePostContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntime
} // namespace QtAws
