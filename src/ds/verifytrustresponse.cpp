/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "verifytrustresponse.h"
#include "verifytrustresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  VerifyTrustResponse
 *
 * @brief  Handles DirectoryService VerifyTrust responses.
 *
 * @see    DirectoryServiceClient::verifyTrust
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyTrustResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new VerifyTrustResponsePrivate(this), parent)
{
    setRequest(new VerifyTrustRequest(request));
    setReply(reply);
}

const VerifyTrustRequest * VerifyTrustResponse::request() const
{
    Q_D(const VerifyTrustResponse);
    return static_cast<const VerifyTrustRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService VerifyTrust response.
 *
 * @param  response  Response to parse.
 */
void VerifyTrustResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  VerifyTrustResponsePrivate
 *
 * @brief  Private implementation for VerifyTrustResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyTrustResponsePrivate object.
 *
 * @param  q  Pointer to this object's public VerifyTrustResponse instance.
 */
VerifyTrustResponsePrivate::VerifyTrustResponsePrivate(
    VerifyTrustQueueResponse * const q) : VerifyTrustPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService VerifyTrustResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void VerifyTrustResponsePrivate::VerifyTrustResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyTrustResponse"));
    /// @todo
}
