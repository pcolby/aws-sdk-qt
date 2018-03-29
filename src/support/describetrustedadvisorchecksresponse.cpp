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

#include "describetrustedadvisorchecksresponse.h"
#include "describetrustedadvisorchecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorChecksResponse
 *
 * @brief  Handles Support DescribeTrustedAdvisorChecks responses.
 *
 * @see    SupportClient::describeTrustedAdvisorChecks
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorChecksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustedAdvisorChecksResponse::DescribeTrustedAdvisorChecksResponse(
        const DescribeTrustedAdvisorChecksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeTrustedAdvisorChecksResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustedAdvisorChecksRequest(request));
    setReply(reply);
}

const DescribeTrustedAdvisorChecksRequest * DescribeTrustedAdvisorChecksResponse::request() const
{
    Q_D(const DescribeTrustedAdvisorChecksResponse);
    return static_cast<const DescribeTrustedAdvisorChecksRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeTrustedAdvisorChecks response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrustedAdvisorChecksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorChecksResponsePrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorChecksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorChecksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrustedAdvisorChecksResponse instance.
 */
DescribeTrustedAdvisorChecksResponsePrivate::DescribeTrustedAdvisorChecksResponsePrivate(
    DescribeTrustedAdvisorChecksQueueResponse * const q) : DescribeTrustedAdvisorChecksPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeTrustedAdvisorChecksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrustedAdvisorChecksResponsePrivate::DescribeTrustedAdvisorChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustedAdvisorChecksResponse"));
    /// @todo
}

} // namespace Support
} // namespace AWS
