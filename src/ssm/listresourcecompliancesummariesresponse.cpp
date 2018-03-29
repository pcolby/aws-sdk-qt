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

#include "listresourcecompliancesummariesresponse.h"
#include "listresourcecompliancesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListResourceComplianceSummariesResponse
 *
 * @brief  Handles SSM ListResourceComplianceSummaries responses.
 *
 * @see    SSMClient::listResourceComplianceSummaries
 */

/**
 * @brief  Constructs a new ListResourceComplianceSummariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceComplianceSummariesResponse::ListResourceComplianceSummariesResponse(
        const ListResourceComplianceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListResourceComplianceSummariesResponsePrivate(this), parent)
{
    setRequest(new ListResourceComplianceSummariesRequest(request));
    setReply(reply);
}

const ListResourceComplianceSummariesRequest * ListResourceComplianceSummariesResponse::request() const
{
    Q_D(const ListResourceComplianceSummariesResponse);
    return static_cast<const ListResourceComplianceSummariesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListResourceComplianceSummaries response.
 *
 * @param  response  Response to parse.
 */
void ListResourceComplianceSummariesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceComplianceSummariesResponsePrivate
 *
 * @brief  Private implementation for ListResourceComplianceSummariesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceComplianceSummariesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceComplianceSummariesResponse instance.
 */
ListResourceComplianceSummariesResponsePrivate::ListResourceComplianceSummariesResponsePrivate(
    ListResourceComplianceSummariesResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListResourceComplianceSummariesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceComplianceSummariesResponsePrivate::ListResourceComplianceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceComplianceSummariesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
