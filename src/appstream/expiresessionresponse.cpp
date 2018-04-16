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

#include "expiresessionresponse.h"
#include "expiresessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::ExpireSessionResponse
 *
 * \brief The ExpireSessionResponse class encapsulates AppStream ExpireSession responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::expireSession
 */

/*!
 * @brief  Constructs a new ExpireSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExpireSessionResponse::ExpireSessionResponse(
        const ExpireSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new ExpireSessionResponsePrivate(this), parent)
{
    setRequest(new ExpireSessionRequest(request));
    setReply(reply);
}

const ExpireSessionRequest * ExpireSessionResponse::request() const
{
    Q_D(const ExpireSessionResponse);
    return static_cast<const ExpireSessionRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream ExpireSession response.
 *
 * @param  response  Response to parse.
 */
void ExpireSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExpireSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ExpireSessionResponsePrivate
 *
 * \brief Private implementation for ExpireSessionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExpireSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExpireSessionResponse instance.
 */
ExpireSessionResponsePrivate::ExpireSessionResponsePrivate(
    ExpireSessionResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream ExpireSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExpireSessionResponsePrivate::parseExpireSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExpireSessionResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
