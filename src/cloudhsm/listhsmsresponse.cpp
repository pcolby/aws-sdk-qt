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

#include "listhsmsresponse.h"
#include "listhsmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  ListHsmsResponse
 *
 * @brief  Handles CloudHSM ListHsms responses.
 *
 * @see    CloudHSMClient::listHsms
 */

/**
 * @brief  Constructs a new ListHsmsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHsmsResponse::ListHsmsResponse(
        const ListHsmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListHsmsResponse(new ListHsmsResponsePrivate(this), parent)
{
    setRequest(new ListHsmsRequest(request));
    setReply(reply);
}

const ListHsmsRequest * ListHsmsResponse::request() const
{
    Q_D(const ListHsmsResponse);
    return static_cast<const ListHsmsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ListHsms response.
 *
 * @param  response  Response to parse.
 */
void ListHsmsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHsmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHsmsResponsePrivate
 *
 * @brief  Private implementation for ListHsmsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHsmsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHsmsResponse instance.
 */
ListHsmsResponsePrivate::ListHsmsResponsePrivate(
    ListHsmsResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ListHsmsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHsmsResponsePrivate::parseListHsmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHsmsResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
