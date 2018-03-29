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

#include "listrulespackagesresponse.h"
#include "listrulespackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  ListRulesPackagesResponse
 *
 * @brief  Handles Inspector ListRulesPackages responses.
 *
 * @see    InspectorClient::listRulesPackages
 */

/**
 * @brief  Constructs a new ListRulesPackagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRulesPackagesResponse::ListRulesPackagesResponse(
        const ListRulesPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListRulesPackagesResponse(new ListRulesPackagesResponsePrivate(this), parent)
{
    setRequest(new ListRulesPackagesRequest(request));
    setReply(reply);
}

const ListRulesPackagesRequest * ListRulesPackagesResponse::request() const
{
    Q_D(const ListRulesPackagesResponse);
    return static_cast<const ListRulesPackagesRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector ListRulesPackages response.
 *
 * @param  response  Response to parse.
 */
void ListRulesPackagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRulesPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRulesPackagesResponsePrivate
 *
 * @brief  Private implementation for ListRulesPackagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesPackagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRulesPackagesResponse instance.
 */
ListRulesPackagesResponsePrivate::ListRulesPackagesResponsePrivate(
    ListRulesPackagesResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector ListRulesPackagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRulesPackagesResponsePrivate::parseListRulesPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesPackagesResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
