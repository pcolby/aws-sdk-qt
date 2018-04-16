/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "posttextresponse.h"
#include "posttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::PostTextResponse
 *
 * \brief The PostTextResponse class encapsulates LexRuntimeService PostText responses.
 *
 * \ingroup LexRuntimeService
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeServiceClient::postText
 */

/*!
 * @brief  Constructs a new PostTextResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PostTextResponse::PostTextResponse(
        const PostTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeServiceResponse(new PostTextResponsePrivate(this), parent)
{
    setRequest(new PostTextRequest(request));
    setReply(reply);
}

const PostTextRequest * PostTextResponse::request() const
{
    Q_D(const PostTextResponse);
    return static_cast<const PostTextRequest *>(d->request);
}

/*!
 * @brief  Parse a LexRuntimeService PostText response.
 *
 * @param  response  Response to parse.
 */
void PostTextResponse::parseSuccess(QIODevice &response)
{
    Q_D(PostTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PostTextResponsePrivate
 *
 * \brief Private implementation for PostTextResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PostTextResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PostTextResponse instance.
 */
PostTextResponsePrivate::PostTextResponsePrivate(
    PostTextResponse * const q) : LexRuntimeServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an LexRuntimeService PostTextResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PostTextResponsePrivate::parsePostTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostTextResponse"));
    /// @todo
}

} // namespace LexRuntimeService
} // namespace QtAws
