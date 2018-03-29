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

#include "puteventselectorsresponse.h"
#include "puteventselectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  PutEventSelectorsResponse
 *
 * @brief  Handles CloudTrail PutEventSelectors responses.
 *
 * @see    CloudTrailClient::putEventSelectors
 */

/**
 * @brief  Constructs a new PutEventSelectorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventSelectorsResponse::PutEventSelectorsResponse(
        const PutEventSelectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new PutEventSelectorsResponsePrivate(this), parent)
{
    setRequest(new PutEventSelectorsRequest(request));
    setReply(reply);
}

const PutEventSelectorsRequest * PutEventSelectorsResponse::request() const
{
    Q_D(const PutEventSelectorsResponse);
    return static_cast<const PutEventSelectorsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail PutEventSelectors response.
 *
 * @param  response  Response to parse.
 */
void PutEventSelectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutEventSelectorsResponsePrivate
 *
 * @brief  Private implementation for PutEventSelectorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventSelectorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutEventSelectorsResponse instance.
 */
PutEventSelectorsResponsePrivate::PutEventSelectorsResponsePrivate(
    PutEventSelectorsQueueResponse * const q) : PutEventSelectorsPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail PutEventSelectorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEventSelectorsResponsePrivate::PutEventSelectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventSelectorsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS
