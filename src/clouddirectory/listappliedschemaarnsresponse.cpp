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

#include "listappliedschemaarnsresponse.h"
#include "listappliedschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListAppliedSchemaArnsResponse
 *
 * @brief  Handles CloudDirectory ListAppliedSchemaArns responses.
 *
 * @see    CloudDirectoryClient::listAppliedSchemaArns
 */

/**
 * @brief  Constructs a new ListAppliedSchemaArnsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAppliedSchemaArnsResponse::ListAppliedSchemaArnsResponse(
        const ListAppliedSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListAppliedSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListAppliedSchemaArnsRequest(request));
    setReply(reply);
}

const ListAppliedSchemaArnsRequest * ListAppliedSchemaArnsResponse::request() const
{
    Q_D(const ListAppliedSchemaArnsResponse);
    return static_cast<const ListAppliedSchemaArnsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListAppliedSchemaArns response.
 *
 * @param  response  Response to parse.
 */
void ListAppliedSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAppliedSchemaArnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAppliedSchemaArnsResponsePrivate
 *
 * @brief  Private implementation for ListAppliedSchemaArnsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAppliedSchemaArnsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAppliedSchemaArnsResponse instance.
 */
ListAppliedSchemaArnsResponsePrivate::ListAppliedSchemaArnsResponsePrivate(
    ListAppliedSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListAppliedSchemaArnsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAppliedSchemaArnsResponsePrivate::ListAppliedSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppliedSchemaArnsResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
