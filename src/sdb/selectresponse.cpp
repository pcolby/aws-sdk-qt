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

#include "selectresponse.h"
#include "selectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/**
 * @class  SelectResponse
 *
 * @brief  Handles SimpleDB Select responses.
 *
 * @see    SimpleDBClient::select
 */

/**
 * @brief  Constructs a new SelectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SelectResponse::SelectResponse(
        const SelectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new SelectResponsePrivate(this), parent)
{
    setRequest(new SelectRequest(request));
    setReply(reply);
}

const SelectRequest * SelectResponse::request() const
{
    Q_D(const SelectResponse);
    return static_cast<const SelectRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB Select response.
 *
 * @param  response  Response to parse.
 */
void SelectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SelectResponsePrivate
 *
 * @brief  Private implementation for SelectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SelectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SelectResponse instance.
 */
SelectResponsePrivate::SelectResponsePrivate(
    SelectQueueResponse * const q) : SelectPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB SelectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SelectResponsePrivate::SelectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SelectResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace QtAws
