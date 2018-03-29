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

#include "describepatchbaselinesresponse.h"
#include "describepatchbaselinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribePatchBaselinesResponse
 *
 * @brief  Handles SSM DescribePatchBaselines responses.
 *
 * @see    SSMClient::describePatchBaselines
 */

/**
 * @brief  Constructs a new DescribePatchBaselinesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePatchBaselinesResponse::DescribePatchBaselinesResponse(
        const DescribePatchBaselinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribePatchBaselinesResponsePrivate(this), parent)
{
    setRequest(new DescribePatchBaselinesRequest(request));
    setReply(reply);
}

const DescribePatchBaselinesRequest * DescribePatchBaselinesResponse::request() const
{
    Q_D(const DescribePatchBaselinesResponse);
    return static_cast<const DescribePatchBaselinesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribePatchBaselines response.
 *
 * @param  response  Response to parse.
 */
void DescribePatchBaselinesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePatchBaselinesResponsePrivate
 *
 * @brief  Private implementation for DescribePatchBaselinesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePatchBaselinesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePatchBaselinesResponse instance.
 */
DescribePatchBaselinesResponsePrivate::DescribePatchBaselinesResponsePrivate(
    DescribePatchBaselinesQueueResponse * const q) : DescribePatchBaselinesPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribePatchBaselinesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePatchBaselinesResponsePrivate::DescribePatchBaselinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePatchBaselinesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
