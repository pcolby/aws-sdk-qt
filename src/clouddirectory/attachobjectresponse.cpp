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

#include "attachobjectresponse.h"
#include "attachobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  AttachObjectResponse
 *
 * @brief  Handles CloudDirectory AttachObject responses.
 *
 * @see    CloudDirectoryClient::attachObject
 */

/**
 * @brief  Constructs a new AttachObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachObjectResponse::AttachObjectResponse(
        const AttachObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachObjectResponsePrivate(this), parent)
{
    setRequest(new AttachObjectRequest(request));
    setReply(reply);
}

const AttachObjectRequest * AttachObjectResponse::request() const
{
    Q_D(const AttachObjectResponse);
    return static_cast<const AttachObjectRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory AttachObject response.
 *
 * @param  response  Response to parse.
 */
void AttachObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachObjectResponsePrivate
 *
 * @brief  Private implementation for AttachObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachObjectResponse instance.
 */
AttachObjectResponsePrivate::AttachObjectResponsePrivate(
    AttachObjectQueueResponse * const q) : AttachObjectPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory AttachObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachObjectResponsePrivate::AttachObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
