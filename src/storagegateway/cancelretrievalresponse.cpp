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

#include "cancelretrievalresponse.h"
#include "cancelretrievalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CancelRetrievalResponse
 *
 * @brief  Handles StorageGateway CancelRetrieval responses.
 *
 * @see    StorageGatewayClient::cancelRetrieval
 */

/**
 * @brief  Constructs a new CancelRetrievalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelRetrievalResponse::CancelRetrievalResponse(
        const CancelRetrievalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CancelRetrievalResponsePrivate(this), parent)
{
    setRequest(new CancelRetrievalRequest(request));
    setReply(reply);
}

const CancelRetrievalRequest * CancelRetrievalResponse::request() const
{
    Q_D(const CancelRetrievalResponse);
    return static_cast<const CancelRetrievalRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CancelRetrieval response.
 *
 * @param  response  Response to parse.
 */
void CancelRetrievalResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelRetrievalResponsePrivate
 *
 * @brief  Private implementation for CancelRetrievalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelRetrievalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelRetrievalResponse instance.
 */
CancelRetrievalResponsePrivate::CancelRetrievalResponsePrivate(
    CancelRetrievalResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CancelRetrievalResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelRetrievalResponsePrivate::CancelRetrievalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelRetrievalResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
