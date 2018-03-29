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

#include "disabledirectoryresponse.h"
#include "disabledirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DisableDirectoryResponse
 *
 * @brief  Handles CloudDirectory DisableDirectory responses.
 *
 * @see    CloudDirectoryClient::disableDirectory
 */

/**
 * @brief  Constructs a new DisableDirectoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableDirectoryResponse::DisableDirectoryResponse(
        const DisableDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DisableDirectoryResponsePrivate(this), parent)
{
    setRequest(new DisableDirectoryRequest(request));
    setReply(reply);
}

const DisableDirectoryRequest * DisableDirectoryResponse::request() const
{
    Q_D(const DisableDirectoryResponse);
    return static_cast<const DisableDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DisableDirectory response.
 *
 * @param  response  Response to parse.
 */
void DisableDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableDirectoryResponsePrivate
 *
 * @brief  Private implementation for DisableDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableDirectoryResponse instance.
 */
DisableDirectoryResponsePrivate::DisableDirectoryResponsePrivate(
    DisableDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DisableDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableDirectoryResponsePrivate::parseDisableDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDirectoryResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
