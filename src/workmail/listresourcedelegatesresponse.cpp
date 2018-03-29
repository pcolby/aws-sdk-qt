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

#include "listresourcedelegatesresponse.h"
#include "listresourcedelegatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListResourceDelegatesResponse
 *
 * @brief  Handles WorkMail ListResourceDelegates responses.
 *
 * @see    WorkMailClient::listResourceDelegates
 */

/**
 * @brief  Constructs a new ListResourceDelegatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceDelegatesResponse::ListResourceDelegatesResponse(
        const ListResourceDelegatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new ListResourceDelegatesResponsePrivate(this), parent)
{
    setRequest(new ListResourceDelegatesRequest(request));
    setReply(reply);
}

const ListResourceDelegatesRequest * ListResourceDelegatesResponse::request() const
{
    Q_D(const ListResourceDelegatesResponse);
    return static_cast<const ListResourceDelegatesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail ListResourceDelegates response.
 *
 * @param  response  Response to parse.
 */
void ListResourceDelegatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceDelegatesResponsePrivate
 *
 * @brief  Private implementation for ListResourceDelegatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDelegatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceDelegatesResponse instance.
 */
ListResourceDelegatesResponsePrivate::ListResourceDelegatesResponsePrivate(
    ListResourceDelegatesResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail ListResourceDelegatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceDelegatesResponsePrivate::ListResourceDelegatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDelegatesResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
