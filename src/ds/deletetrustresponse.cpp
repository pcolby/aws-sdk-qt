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

#include "deletetrustresponse.h"
#include "deletetrustresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DeleteTrustResponse
 *
 * @brief  Handles DirectoryService DeleteTrust responses.
 *
 * @see    DirectoryServiceClient::deleteTrust
 */

/**
 * @brief  Constructs a new DeleteTrustResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTrustResponse::DeleteTrustResponse(
        const DeleteTrustRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteTrustResponsePrivate(this), parent)
{
    setRequest(new DeleteTrustRequest(request));
    setReply(reply);
}

const DeleteTrustRequest * DeleteTrustResponse::request() const
{
    Q_D(const DeleteTrustResponse);
    return static_cast<const DeleteTrustRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DeleteTrust response.
 *
 * @param  response  Response to parse.
 */
void DeleteTrustResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTrustResponsePrivate
 *
 * @brief  Private implementation for DeleteTrustResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrustResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTrustResponse instance.
 */
DeleteTrustResponsePrivate::DeleteTrustResponsePrivate(
    DeleteTrustQueueResponse * const q) : DeleteTrustPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DeleteTrustResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTrustResponsePrivate::DeleteTrustResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrustResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
