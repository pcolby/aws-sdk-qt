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

#include "creategrantresponse.h"
#include "creategrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  CreateGrantResponse
 *
 * @brief  Handles KMS CreateGrant responses.
 *
 * @see    KMSClient::createGrant
 */

/**
 * @brief  Constructs a new CreateGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGrantResponse::CreateGrantResponse(
        const CreateGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new CreateGrantResponsePrivate(this), parent)
{
    setRequest(new CreateGrantRequest(request));
    setReply(reply);
}

const CreateGrantRequest * CreateGrantResponse::request() const
{
    Q_D(const CreateGrantResponse);
    return static_cast<const CreateGrantRequest *>(d->request);
}

/**
 * @brief  Parse a KMS CreateGrant response.
 *
 * @param  response  Response to parse.
 */
void CreateGrantResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGrantResponsePrivate
 *
 * @brief  Private implementation for CreateGrantResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGrantResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGrantResponse instance.
 */
CreateGrantResponsePrivate::CreateGrantResponsePrivate(
    CreateGrantResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS CreateGrantResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGrantResponsePrivate::parseCreateGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGrantResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
