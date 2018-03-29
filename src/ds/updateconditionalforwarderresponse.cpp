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

#include "updateconditionalforwarderresponse.h"
#include "updateconditionalforwarderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  UpdateConditionalForwarderResponse
 *
 * @brief  Handles DirectoryService UpdateConditionalForwarder responses.
 *
 * @see    DirectoryServiceClient::updateConditionalForwarder
 */

/**
 * @brief  Constructs a new UpdateConditionalForwarderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConditionalForwarderResponse::UpdateConditionalForwarderResponse(
        const UpdateConditionalForwarderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateConditionalForwarderResponse(new UpdateConditionalForwarderResponsePrivate(this), parent)
{
    setRequest(new UpdateConditionalForwarderRequest(request));
    setReply(reply);
}

const UpdateConditionalForwarderRequest * UpdateConditionalForwarderResponse::request() const
{
    Q_D(const UpdateConditionalForwarderResponse);
    return static_cast<const UpdateConditionalForwarderRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService UpdateConditionalForwarder response.
 *
 * @param  response  Response to parse.
 */
void UpdateConditionalForwarderResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConditionalForwarderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConditionalForwarderResponsePrivate
 *
 * @brief  Private implementation for UpdateConditionalForwarderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConditionalForwarderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConditionalForwarderResponse instance.
 */
UpdateConditionalForwarderResponsePrivate::UpdateConditionalForwarderResponsePrivate(
    UpdateConditionalForwarderResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService UpdateConditionalForwarderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConditionalForwarderResponsePrivate::parseUpdateConditionalForwarderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConditionalForwarderResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
