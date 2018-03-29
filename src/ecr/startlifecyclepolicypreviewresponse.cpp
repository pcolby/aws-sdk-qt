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

#include "startlifecyclepolicypreviewresponse.h"
#include "startlifecyclepolicypreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  StartLifecyclePolicyPreviewResponse
 *
 * @brief  Handles ECR StartLifecyclePolicyPreview responses.
 *
 * @see    ECRClient::startLifecyclePolicyPreview
 */

/**
 * @brief  Constructs a new StartLifecyclePolicyPreviewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartLifecyclePolicyPreviewResponse::StartLifecyclePolicyPreviewResponse(
        const StartLifecyclePolicyPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new StartLifecyclePolicyPreviewResponsePrivate(this), parent)
{
    setRequest(new StartLifecyclePolicyPreviewRequest(request));
    setReply(reply);
}

const StartLifecyclePolicyPreviewRequest * StartLifecyclePolicyPreviewResponse::request() const
{
    Q_D(const StartLifecyclePolicyPreviewResponse);
    return static_cast<const StartLifecyclePolicyPreviewRequest *>(d->request);
}

/**
 * @brief  Parse a ECR StartLifecyclePolicyPreview response.
 *
 * @param  response  Response to parse.
 */
void StartLifecyclePolicyPreviewResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartLifecyclePolicyPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartLifecyclePolicyPreviewResponsePrivate
 *
 * @brief  Private implementation for StartLifecyclePolicyPreviewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartLifecyclePolicyPreviewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartLifecyclePolicyPreviewResponse instance.
 */
StartLifecyclePolicyPreviewResponsePrivate::StartLifecyclePolicyPreviewResponsePrivate(
    StartLifecyclePolicyPreviewResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR StartLifecyclePolicyPreviewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartLifecyclePolicyPreviewResponsePrivate::StartLifecyclePolicyPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLifecyclePolicyPreviewResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
