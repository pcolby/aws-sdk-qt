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

#include "deletesessionresponse.h"
#include "deletesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::DeleteSessionResponse
 * \brief The DeleteSessionResponse class provides an interace for LexRuntimeService DeleteSession responses.
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
 * \sa LexRuntimeServiceClient::deleteSession
 */

/*!
 * Constructs a DeleteSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSessionResponse::DeleteSessionResponse(
        const DeleteSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeServiceResponse(new DeleteSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSessionRequest * DeleteSessionResponse::request() const
{
    Q_D(const DeleteSessionResponse);
    return static_cast<const DeleteSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeService DeleteSession \a response.
 */
void DeleteSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeService::DeleteSessionResponsePrivate
 * \brief The DeleteSessionResponsePrivate class provides private implementation for DeleteSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * Constructs a DeleteSessionResponsePrivate object with public implementation \a q.
 */
DeleteSessionResponsePrivate::DeleteSessionResponsePrivate(
    DeleteSessionResponse * const q) : LexRuntimeServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeService DeleteSession response element from \a xml.
 */
void DeleteSessionResponsePrivate::parseDeleteSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeService
} // namespace QtAws
