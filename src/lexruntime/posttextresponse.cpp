// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "posttextresponse.h"
#include "posttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PostTextResponse
 * \brief The PostTextResponse class provides an interace for LexRuntime PostText responses.
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
 * \sa LexRuntimeClient::postText
 */

/*!
 * Constructs a PostTextResponse object for \a reply to \a request, with parent \a parent.
 */
PostTextResponse::PostTextResponse(
        const PostTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeResponse(new PostTextResponsePrivate(this), parent)
{
    setRequest(new PostTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PostTextRequest * PostTextResponse::request() const
{
    Q_D(const PostTextResponse);
    return static_cast<const PostTextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntime PostText \a response.
 */
void PostTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PostTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntime::PostTextResponsePrivate
 * \brief The PostTextResponsePrivate class provides private implementation for PostTextResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PostTextResponsePrivate object with public implementation \a q.
 */
PostTextResponsePrivate::PostTextResponsePrivate(
    PostTextResponse * const q) : LexRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntime PostText response element from \a xml.
 */
void PostTextResponsePrivate::parsePostTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntime
} // namespace QtAws
