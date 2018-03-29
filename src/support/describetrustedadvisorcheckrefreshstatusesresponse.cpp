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

#include "describetrustedadvisorcheckrefreshstatusesresponse.h"
#include "describetrustedadvisorcheckrefreshstatusesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckRefreshStatusesResponse
 *
 * @brief  Handles Support DescribeTrustedAdvisorCheckRefreshStatuses responses.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckRefreshStatuses
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustedAdvisorCheckRefreshStatusesResponse::DescribeTrustedAdvisorCheckRefreshStatusesResponse(
        const DescribeTrustedAdvisorCheckRefreshStatusesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustedAdvisorCheckRefreshStatusesRequest(request));
    setReply(reply);
}

const DescribeTrustedAdvisorCheckRefreshStatusesRequest * DescribeTrustedAdvisorCheckRefreshStatusesResponse::request() const
{
    Q_D(const DescribeTrustedAdvisorCheckRefreshStatusesResponse);
    return static_cast<const DescribeTrustedAdvisorCheckRefreshStatusesRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeTrustedAdvisorCheckRefreshStatuses response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrustedAdvisorCheckRefreshStatusesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckRefreshStatusesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrustedAdvisorCheckRefreshStatusesResponse instance.
 */
DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate::DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate(
    DescribeTrustedAdvisorCheckRefreshStatusesQueueResponse * const q) : DescribeTrustedAdvisorCheckRefreshStatusesPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeTrustedAdvisorCheckRefreshStatusesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate::DescribeTrustedAdvisorCheckRefreshStatusesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustedAdvisorCheckRefreshStatusesResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
