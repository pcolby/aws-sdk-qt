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

#include "listcompliancesummariesresponse.h"
#include "listcompliancesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListComplianceSummariesResponse
 *
 * @brief  Handles SSM ListComplianceSummaries responses.
 *
 * @see    SSMClient::listComplianceSummaries
 */

/**
 * @brief  Constructs a new ListComplianceSummariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListComplianceSummariesResponse::ListComplianceSummariesResponse(
        const ListComplianceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListComplianceSummariesResponsePrivate(this), parent)
{
    setRequest(new ListComplianceSummariesRequest(request));
    setReply(reply);
}

const ListComplianceSummariesRequest * ListComplianceSummariesResponse::request() const
{
    Q_D(const ListComplianceSummariesResponse);
    return static_cast<const ListComplianceSummariesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListComplianceSummaries response.
 *
 * @param  response  Response to parse.
 */
void ListComplianceSummariesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListComplianceSummariesResponsePrivate
 *
 * @brief  Private implementation for ListComplianceSummariesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceSummariesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListComplianceSummariesResponse instance.
 */
ListComplianceSummariesResponsePrivate::ListComplianceSummariesResponsePrivate(
    ListComplianceSummariesQueueResponse * const q) : ListComplianceSummariesPrivate(q)
{

}

/**
 * @brief  Parse an SSM ListComplianceSummariesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListComplianceSummariesResponsePrivate::ListComplianceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceSummariesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
