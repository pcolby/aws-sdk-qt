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

#include "changeresourcerecordsetsresponse.h"
#include "changeresourcerecordsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  ChangeResourceRecordSetsResponse
 *
 * @brief  Handles Route53 ChangeResourceRecordSets responses.
 *
 * @see    Route53Client::changeResourceRecordSets
 */

/**
 * @brief  Constructs a new ChangeResourceRecordSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ChangeResourceRecordSetsResponse::ChangeResourceRecordSetsResponse(
        const ChangeResourceRecordSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ChangeResourceRecordSetsResponsePrivate(this), parent)
{
    setRequest(new ChangeResourceRecordSetsRequest(request));
    setReply(reply);
}

const ChangeResourceRecordSetsRequest * ChangeResourceRecordSetsResponse::request() const
{
    Q_D(const ChangeResourceRecordSetsResponse);
    return static_cast<const ChangeResourceRecordSetsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ChangeResourceRecordSets response.
 *
 * @param  response  Response to parse.
 */
void ChangeResourceRecordSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ChangeResourceRecordSetsResponsePrivate
 *
 * @brief  Private implementation for ChangeResourceRecordSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeResourceRecordSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ChangeResourceRecordSetsResponse instance.
 */
ChangeResourceRecordSetsResponsePrivate::ChangeResourceRecordSetsResponsePrivate(
    ChangeResourceRecordSetsQueueResponse * const q) : ChangeResourceRecordSetsPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ChangeResourceRecordSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ChangeResourceRecordSetsResponsePrivate::ChangeResourceRecordSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeResourceRecordSetsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
