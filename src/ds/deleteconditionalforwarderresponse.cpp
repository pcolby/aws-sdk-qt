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

#include "deleteconditionalforwarderresponse.h"
#include "deleteconditionalforwarderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DeleteConditionalForwarderResponse
 *
 * @brief  Handles DirectoryService DeleteConditionalForwarder responses.
 *
 * @see    DirectoryServiceClient::deleteConditionalForwarder
 */

/**
 * @brief  Constructs a new DeleteConditionalForwarderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConditionalForwarderResponse::DeleteConditionalForwarderResponse(
        const DeleteConditionalForwarderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteConditionalForwarderResponsePrivate(this), parent)
{
    setRequest(new DeleteConditionalForwarderRequest(request));
    setReply(reply);
}

const DeleteConditionalForwarderRequest * DeleteConditionalForwarderResponse::request() const
{
    Q_D(const DeleteConditionalForwarderResponse);
    return static_cast<const DeleteConditionalForwarderRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DeleteConditionalForwarder response.
 *
 * @param  response  Response to parse.
 */
void DeleteConditionalForwarderResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConditionalForwarderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConditionalForwarderResponsePrivate
 *
 * @brief  Private implementation for DeleteConditionalForwarderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConditionalForwarderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConditionalForwarderResponse instance.
 */
DeleteConditionalForwarderResponsePrivate::DeleteConditionalForwarderResponsePrivate(
    DeleteConditionalForwarderResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DeleteConditionalForwarderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConditionalForwarderResponsePrivate::DeleteConditionalForwarderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConditionalForwarderResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
