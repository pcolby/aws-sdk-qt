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

#include "cancelhandshakeresponse.h"
#include "cancelhandshakeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  CancelHandshakeResponse
 *
 * @brief  Handles Organizations CancelHandshake responses.
 *
 * @see    OrganizationsClient::cancelHandshake
 */

/**
 * @brief  Constructs a new CancelHandshakeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelHandshakeResponse::CancelHandshakeResponse(
        const CancelHandshakeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new CancelHandshakeResponsePrivate(this), parent)
{
    setRequest(new CancelHandshakeRequest(request));
    setReply(reply);
}

const CancelHandshakeRequest * CancelHandshakeResponse::request() const
{
    Q_D(const CancelHandshakeResponse);
    return static_cast<const CancelHandshakeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations CancelHandshake response.
 *
 * @param  response  Response to parse.
 */
void CancelHandshakeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelHandshakeResponsePrivate
 *
 * @brief  Private implementation for CancelHandshakeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelHandshakeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelHandshakeResponse instance.
 */
CancelHandshakeResponsePrivate::CancelHandshakeResponsePrivate(
    CancelHandshakeQueueResponse * const q) : CancelHandshakePrivate(q)
{

}

/**
 * @brief  Parse an Organizations CancelHandshakeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelHandshakeResponsePrivate::CancelHandshakeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelHandshakeResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
