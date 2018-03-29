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

#include "createprotectionresponse.h"
#include "createprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  CreateProtectionResponse
 *
 * @brief  Handles Shield CreateProtection responses.
 *
 * @see    ShieldClient::createProtection
 */

/**
 * @brief  Constructs a new CreateProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProtectionResponse::CreateProtectionResponse(
        const CreateProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new CreateProtectionResponsePrivate(this), parent)
{
    setRequest(new CreateProtectionRequest(request));
    setReply(reply);
}

const CreateProtectionRequest * CreateProtectionResponse::request() const
{
    Q_D(const CreateProtectionResponse);
    return static_cast<const CreateProtectionRequest *>(d->request);
}

/**
 * @brief  Parse a Shield CreateProtection response.
 *
 * @param  response  Response to parse.
 */
void CreateProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProtectionResponsePrivate
 *
 * @brief  Private implementation for CreateProtectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProtectionResponse instance.
 */
CreateProtectionResponsePrivate::CreateProtectionResponsePrivate(
    CreateProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/**
 * @brief  Parse an Shield CreateProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProtectionResponsePrivate::parseCreateProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProtectionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
