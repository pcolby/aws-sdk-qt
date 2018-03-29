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

#include "deletelunaclientresponse.h"
#include "deletelunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  DeleteLunaClientResponse
 *
 * @brief  Handles CloudHSM DeleteLunaClient responses.
 *
 * @see    CloudHSMClient::deleteLunaClient
 */

/**
 * @brief  Constructs a new DeleteLunaClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLunaClientResponse::DeleteLunaClientResponse(
        const DeleteLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DeleteLunaClientResponsePrivate(this), parent)
{
    setRequest(new DeleteLunaClientRequest(request));
    setReply(reply);
}

const DeleteLunaClientRequest * DeleteLunaClientResponse::request() const
{
    Q_D(const DeleteLunaClientResponse);
    return static_cast<const DeleteLunaClientRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM DeleteLunaClient response.
 *
 * @param  response  Response to parse.
 */
void DeleteLunaClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLunaClientResponsePrivate
 *
 * @brief  Private implementation for DeleteLunaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLunaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLunaClientResponse instance.
 */
DeleteLunaClientResponsePrivate::DeleteLunaClientResponsePrivate(
    DeleteLunaClientResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM DeleteLunaClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLunaClientResponsePrivate::DeleteLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLunaClientResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
