/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "connectdirectoryresponse.h"
#include "connectdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  ConnectDirectoryResponse
 *
 * @brief  Handles DirectoryService ConnectDirectory responses.
 *
 * @see    DirectoryServiceClient::connectDirectory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConnectDirectoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new ConnectDirectoryResponsePrivate(this), parent)
{
    setRequest(new ConnectDirectoryRequest(request));
    setReply(reply);
}

const ConnectDirectoryRequest * ConnectDirectoryResponse::request() const
{
    Q_D(const ConnectDirectoryResponse);
    return static_cast<const ConnectDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService ConnectDirectory response.
 *
 * @param  response  Response to parse.
 */
void ConnectDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConnectDirectoryResponsePrivate
 *
 * @brief  Private implementation for ConnectDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConnectDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConnectDirectoryResponse instance.
 */
ConnectDirectoryResponsePrivate::ConnectDirectoryResponsePrivate(
    ConnectDirectoryQueueResponse * const q) : ConnectDirectoryPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService ConnectDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConnectDirectoryResponsePrivate::ConnectDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConnectDirectoryResponse"));
    /// @todo
}
