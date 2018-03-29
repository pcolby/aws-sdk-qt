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

#include "getconsoleoutputresponse.h"
#include "getconsoleoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  GetConsoleOutputResponse
 *
 * @brief  Handles EC2 GetConsoleOutput responses.
 *
 * @see    EC2Client::getConsoleOutput
 */

/**
 * @brief  Constructs a new GetConsoleOutputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConsoleOutputResponse::GetConsoleOutputResponse(
        const GetConsoleOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetConsoleOutputResponse(new GetConsoleOutputResponsePrivate(this), parent)
{
    setRequest(new GetConsoleOutputRequest(request));
    setReply(reply);
}

const GetConsoleOutputRequest * GetConsoleOutputResponse::request() const
{
    Q_D(const GetConsoleOutputResponse);
    return static_cast<const GetConsoleOutputRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetConsoleOutput response.
 *
 * @param  response  Response to parse.
 */
void GetConsoleOutputResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetConsoleOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConsoleOutputResponsePrivate
 *
 * @brief  Private implementation for GetConsoleOutputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleOutputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConsoleOutputResponse instance.
 */
GetConsoleOutputResponsePrivate::GetConsoleOutputResponsePrivate(
    GetConsoleOutputResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetConsoleOutputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConsoleOutputResponsePrivate::parseGetConsoleOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConsoleOutputResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
