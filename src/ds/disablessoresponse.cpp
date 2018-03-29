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

#include "disablessoresponse.h"
#include "disablessoresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DisableSsoResponse
 *
 * @brief  Handles DirectoryService DisableSso responses.
 *
 * @see    DirectoryServiceClient::disableSso
 */

/**
 * @brief  Constructs a new DisableSsoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableSsoResponse::DisableSsoResponse(
        const DisableSsoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DisableSsoResponsePrivate(this), parent)
{
    setRequest(new DisableSsoRequest(request));
    setReply(reply);
}

const DisableSsoRequest * DisableSsoResponse::request() const
{
    Q_D(const DisableSsoResponse);
    return static_cast<const DisableSsoRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DisableSso response.
 *
 * @param  response  Response to parse.
 */
void DisableSsoResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableSsoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableSsoResponsePrivate
 *
 * @brief  Private implementation for DisableSsoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableSsoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableSsoResponse instance.
 */
DisableSsoResponsePrivate::DisableSsoResponsePrivate(
    DisableSsoResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DisableSsoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableSsoResponsePrivate::parseDisableSsoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableSsoResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
