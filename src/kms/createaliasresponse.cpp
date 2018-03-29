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

#include "createaliasresponse.h"
#include "createaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  CreateAliasResponse
 *
 * @brief  Handles KMS CreateAlias responses.
 *
 * @see    KMSClient::createAlias
 */

/**
 * @brief  Constructs a new CreateAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAliasResponse::CreateAliasResponse(
        const CreateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new CreateAliasResponsePrivate(this), parent)
{
    setRequest(new CreateAliasRequest(request));
    setReply(reply);
}

const CreateAliasRequest * CreateAliasResponse::request() const
{
    Q_D(const CreateAliasResponse);
    return static_cast<const CreateAliasRequest *>(d->request);
}

/**
 * @brief  Parse a KMS CreateAlias response.
 *
 * @param  response  Response to parse.
 */
void CreateAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAliasResponsePrivate
 *
 * @brief  Private implementation for CreateAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAliasResponse instance.
 */
CreateAliasResponsePrivate::CreateAliasResponsePrivate(
    CreateAliasResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS CreateAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAliasResponsePrivate::CreateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAliasResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
