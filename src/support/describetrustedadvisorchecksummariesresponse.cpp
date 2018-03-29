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

#include "describetrustedadvisorchecksummariesresponse.h"
#include "describetrustedadvisorchecksummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckSummariesResponse
 *
 * @brief  Handles Support DescribeTrustedAdvisorCheckSummaries responses.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckSummaries
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustedAdvisorCheckSummariesResponse::DescribeTrustedAdvisorCheckSummariesResponse(
        const DescribeTrustedAdvisorCheckSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeTrustedAdvisorCheckSummariesResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustedAdvisorCheckSummariesRequest(request));
    setReply(reply);
}

const DescribeTrustedAdvisorCheckSummariesRequest * DescribeTrustedAdvisorCheckSummariesResponse::request() const
{
    Q_D(const DescribeTrustedAdvisorCheckSummariesResponse);
    return static_cast<const DescribeTrustedAdvisorCheckSummariesRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeTrustedAdvisorCheckSummaries response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrustedAdvisorCheckSummariesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckSummariesResponsePrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckSummariesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrustedAdvisorCheckSummariesResponse instance.
 */
DescribeTrustedAdvisorCheckSummariesResponsePrivate::DescribeTrustedAdvisorCheckSummariesResponsePrivate(
    DescribeTrustedAdvisorCheckSummariesQueueResponse * const q) : DescribeTrustedAdvisorCheckSummariesPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeTrustedAdvisorCheckSummariesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrustedAdvisorCheckSummariesResponsePrivate::DescribeTrustedAdvisorCheckSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustedAdvisorCheckSummariesResponse"));
    /// @todo
}

} // namespace Support
} // namespace AWS
