/*
    Copyright 2013-2021 Paul Colby

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
