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

#include "putsessionresponse.h"
#include "putsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::PutSessionResponse
 * \brief The PutSessionResponse class provides an interace for LexRuntimeService PutSession responses.
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
 * \sa LexRuntimeServiceClient::putSession
 */

/*!
 * Constructs a PutSessionResponse object for \a reply to \a request, with parent \a parent.
 */
PutSessionResponse::PutSessionResponse(
        const PutSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeServiceResponse(new PutSessionResponsePrivate(this), parent)
{
    setRequest(new PutSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSessionRequest * PutSessionResponse::request() const
{
    return static_cast<const PutSessionRequest *>(LexRuntimeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LexRuntimeService PutSession \a response.
 */
void PutSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeService::PutSessionResponsePrivate
 * \brief The PutSessionResponsePrivate class provides private implementation for PutSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * Constructs a PutSessionResponsePrivate object with public implementation \a q.
 */
PutSessionResponsePrivate::PutSessionResponsePrivate(
    PutSessionResponse * const q) : LexRuntimeServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeService PutSession response element from \a xml.
 */
void PutSessionResponsePrivate::parsePutSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeService
} // namespace QtAws
