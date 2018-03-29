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

#include "refreshtrustedadvisorcheckresponse.h"
#include "refreshtrustedadvisorcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  RefreshTrustedAdvisorCheckResponse
 *
 * @brief  Handles Support RefreshTrustedAdvisorCheck responses.
 *
 * @see    SupportClient::refreshTrustedAdvisorCheck
 */

/**
 * @brief  Constructs a new RefreshTrustedAdvisorCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RefreshTrustedAdvisorCheckResponse::RefreshTrustedAdvisorCheckResponse(
        const RefreshTrustedAdvisorCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new RefreshTrustedAdvisorCheckResponsePrivate(this), parent)
{
    setRequest(new RefreshTrustedAdvisorCheckRequest(request));
    setReply(reply);
}

const RefreshTrustedAdvisorCheckRequest * RefreshTrustedAdvisorCheckResponse::request() const
{
    Q_D(const RefreshTrustedAdvisorCheckResponse);
    return static_cast<const RefreshTrustedAdvisorCheckRequest *>(d->request);
}

/**
 * @brief  Parse a Support RefreshTrustedAdvisorCheck response.
 *
 * @param  response  Response to parse.
 */
void RefreshTrustedAdvisorCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RefreshTrustedAdvisorCheckResponsePrivate
 *
 * @brief  Private implementation for RefreshTrustedAdvisorCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshTrustedAdvisorCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RefreshTrustedAdvisorCheckResponse instance.
 */
RefreshTrustedAdvisorCheckResponsePrivate::RefreshTrustedAdvisorCheckResponsePrivate(
    RefreshTrustedAdvisorCheckQueueResponse * const q) : RefreshTrustedAdvisorCheckPrivate(q)
{

}

/**
 * @brief  Parse an Support RefreshTrustedAdvisorCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RefreshTrustedAdvisorCheckResponsePrivate::RefreshTrustedAdvisorCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RefreshTrustedAdvisorCheckResponse"));
    /// @todo
}

} // namespace Support
} // namespace AWS
