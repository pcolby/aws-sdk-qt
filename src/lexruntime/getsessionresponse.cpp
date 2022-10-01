// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionresponse.h"
#include "getsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::GetSessionResponse
 * \brief The GetSessionResponse class provides an interace for LexRuntime GetSession responses.
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
 * \sa LexRuntimeClient::getSession
 */

/*!
 * Constructs a GetSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionResponse::GetSessionResponse(
        const GetSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeResponse(new GetSessionResponsePrivate(this), parent)
{
    setRequest(new GetSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionRequest * GetSessionResponse::request() const
{
    Q_D(const GetSessionResponse);
    return static_cast<const GetSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntime GetSession \a response.
 */
void GetSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntime::GetSessionResponsePrivate
 * \brief The GetSessionResponsePrivate class provides private implementation for GetSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a GetSessionResponsePrivate object with public implementation \a q.
 */
GetSessionResponsePrivate::GetSessionResponsePrivate(
    GetSessionResponse * const q) : LexRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntime GetSession response element from \a xml.
 */
void GetSessionResponsePrivate::parseGetSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntime
} // namespace QtAws
