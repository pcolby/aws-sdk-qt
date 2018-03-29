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

#include "declinehandshakeresponse.h"
#include "declinehandshakeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  DeclineHandshakeResponse
 *
 * @brief  Handles Organizations DeclineHandshake responses.
 *
 * @see    OrganizationsClient::declineHandshake
 */

/**
 * @brief  Constructs a new DeclineHandshakeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeclineHandshakeResponse::DeclineHandshakeResponse(
        const DeclineHandshakeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeclineHandshakeResponse(new DeclineHandshakeResponsePrivate(this), parent)
{
    setRequest(new DeclineHandshakeRequest(request));
    setReply(reply);
}

const DeclineHandshakeRequest * DeclineHandshakeResponse::request() const
{
    Q_D(const DeclineHandshakeResponse);
    return static_cast<const DeclineHandshakeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DeclineHandshake response.
 *
 * @param  response  Response to parse.
 */
void DeclineHandshakeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeclineHandshakeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeclineHandshakeResponsePrivate
 *
 * @brief  Private implementation for DeclineHandshakeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeclineHandshakeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeclineHandshakeResponse instance.
 */
DeclineHandshakeResponsePrivate::DeclineHandshakeResponsePrivate(
    DeclineHandshakeResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations DeclineHandshakeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeclineHandshakeResponsePrivate::parseDeclineHandshakeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeclineHandshakeResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
