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

#include "decreasereplicationfactorresponse.h"
#include "decreasereplicationfactorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  DecreaseReplicationFactorResponse
 *
 * @brief  Handles DAX DecreaseReplicationFactor responses.
 *
 * @see    DAXClient::decreaseReplicationFactor
 */

/**
 * @brief  Constructs a new DecreaseReplicationFactorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DecreaseReplicationFactorResponse::DecreaseReplicationFactorResponse(
        const DecreaseReplicationFactorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DecreaseReplicationFactorResponsePrivate(this), parent)
{
    setRequest(new DecreaseReplicationFactorRequest(request));
    setReply(reply);
}

const DecreaseReplicationFactorRequest * DecreaseReplicationFactorResponse::request() const
{
    Q_D(const DecreaseReplicationFactorResponse);
    return static_cast<const DecreaseReplicationFactorRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DecreaseReplicationFactor response.
 *
 * @param  response  Response to parse.
 */
void DecreaseReplicationFactorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DecreaseReplicationFactorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DecreaseReplicationFactorResponsePrivate
 *
 * @brief  Private implementation for DecreaseReplicationFactorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseReplicationFactorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DecreaseReplicationFactorResponse instance.
 */
DecreaseReplicationFactorResponsePrivate::DecreaseReplicationFactorResponsePrivate(
    DecreaseReplicationFactorResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX DecreaseReplicationFactorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DecreaseReplicationFactorResponsePrivate::DecreaseReplicationFactorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseReplicationFactorResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
