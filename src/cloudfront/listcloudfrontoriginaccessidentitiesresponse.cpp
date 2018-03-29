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

#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "listcloudfrontoriginaccessidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  ListCloudFrontOriginAccessIdentitiesResponse
 *
 * @brief  Handles CloudFront ListCloudFrontOriginAccessIdentities responses.
 *
 * @see    CloudFrontClient::listCloudFrontOriginAccessIdentities
 */

/**
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCloudFrontOriginAccessIdentitiesResponse::ListCloudFrontOriginAccessIdentitiesResponse(
        const ListCloudFrontOriginAccessIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListCloudFrontOriginAccessIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListCloudFrontOriginAccessIdentitiesRequest(request));
    setReply(reply);
}

const ListCloudFrontOriginAccessIdentitiesRequest * ListCloudFrontOriginAccessIdentitiesResponse::request() const
{
    Q_D(const ListCloudFrontOriginAccessIdentitiesResponse);
    return static_cast<const ListCloudFrontOriginAccessIdentitiesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront ListCloudFrontOriginAccessIdentities response.
 *
 * @param  response  Response to parse.
 */
void ListCloudFrontOriginAccessIdentitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCloudFrontOriginAccessIdentitiesResponsePrivate
 *
 * @brief  Private implementation for ListCloudFrontOriginAccessIdentitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCloudFrontOriginAccessIdentitiesResponse instance.
 */
ListCloudFrontOriginAccessIdentitiesResponsePrivate::ListCloudFrontOriginAccessIdentitiesResponsePrivate(
    ListCloudFrontOriginAccessIdentitiesQueueResponse * const q) : ListCloudFrontOriginAccessIdentitiesPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront ListCloudFrontOriginAccessIdentitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCloudFrontOriginAccessIdentitiesResponsePrivate::ListCloudFrontOriginAccessIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCloudFrontOriginAccessIdentitiesResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
