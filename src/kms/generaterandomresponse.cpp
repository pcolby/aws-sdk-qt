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

#include "generaterandomresponse.h"
#include "generaterandomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GenerateRandomResponse
 *
 * @brief  Handles KMS GenerateRandom responses.
 *
 * @see    KMSClient::generateRandom
 */

/**
 * @brief  Constructs a new GenerateRandomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateRandomResponse::GenerateRandomResponse(
        const GenerateRandomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GenerateRandomResponsePrivate(this), parent)
{
    setRequest(new GenerateRandomRequest(request));
    setReply(reply);
}

const GenerateRandomRequest * GenerateRandomResponse::request() const
{
    Q_D(const GenerateRandomResponse);
    return static_cast<const GenerateRandomRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GenerateRandom response.
 *
 * @param  response  Response to parse.
 */
void GenerateRandomResponse::parseSuccess(QIODevice &response)
{
    Q_D(GenerateRandomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateRandomResponsePrivate
 *
 * @brief  Private implementation for GenerateRandomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateRandomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateRandomResponse instance.
 */
GenerateRandomResponsePrivate::GenerateRandomResponsePrivate(
    GenerateRandomResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS GenerateRandomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateRandomResponsePrivate::parseGenerateRandomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateRandomResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
