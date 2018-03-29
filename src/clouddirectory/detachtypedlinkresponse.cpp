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

#include "detachtypedlinkresponse.h"
#include "detachtypedlinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DetachTypedLinkResponse
 *
 * @brief  Handles CloudDirectory DetachTypedLink responses.
 *
 * @see    CloudDirectoryClient::detachTypedLink
 */

/**
 * @brief  Constructs a new DetachTypedLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachTypedLinkResponse::DetachTypedLinkResponse(
        const DetachTypedLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachTypedLinkResponsePrivate(this), parent)
{
    setRequest(new DetachTypedLinkRequest(request));
    setReply(reply);
}

const DetachTypedLinkRequest * DetachTypedLinkResponse::request() const
{
    Q_D(const DetachTypedLinkResponse);
    return static_cast<const DetachTypedLinkRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DetachTypedLink response.
 *
 * @param  response  Response to parse.
 */
void DetachTypedLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachTypedLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachTypedLinkResponsePrivate
 *
 * @brief  Private implementation for DetachTypedLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachTypedLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachTypedLinkResponse instance.
 */
DetachTypedLinkResponsePrivate::DetachTypedLinkResponsePrivate(
    DetachTypedLinkResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DetachTypedLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachTypedLinkResponsePrivate::parseDetachTypedLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachTypedLinkResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
