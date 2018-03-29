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

#include "describetrustedadvisorcheckresultresponse.h"
#include "describetrustedadvisorcheckresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckResultResponse
 *
 * @brief  Handles Support DescribeTrustedAdvisorCheckResult responses.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckResult
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustedAdvisorCheckResultResponse::DescribeTrustedAdvisorCheckResultResponse(
        const DescribeTrustedAdvisorCheckResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeTrustedAdvisorCheckResultResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustedAdvisorCheckResultRequest(request));
    setReply(reply);
}

const DescribeTrustedAdvisorCheckResultRequest * DescribeTrustedAdvisorCheckResultResponse::request() const
{
    Q_D(const DescribeTrustedAdvisorCheckResultResponse);
    return static_cast<const DescribeTrustedAdvisorCheckResultRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeTrustedAdvisorCheckResult response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrustedAdvisorCheckResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckResultResponsePrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrustedAdvisorCheckResultResponse instance.
 */
DescribeTrustedAdvisorCheckResultResponsePrivate::DescribeTrustedAdvisorCheckResultResponsePrivate(
    DescribeTrustedAdvisorCheckResultQueueResponse * const q) : DescribeTrustedAdvisorCheckResultPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeTrustedAdvisorCheckResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrustedAdvisorCheckResultResponsePrivate::DescribeTrustedAdvisorCheckResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustedAdvisorCheckResultResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
