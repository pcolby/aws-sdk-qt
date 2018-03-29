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

#include "signalresourceresponse.h"
#include "signalresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  SignalResourceResponse
 *
 * @brief  Handles CloudFormation SignalResource responses.
 *
 * @see    CloudFormationClient::signalResource
 */

/**
 * @brief  Constructs a new SignalResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SignalResourceResponse::SignalResourceResponse(
        const SignalResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new SignalResourceResponsePrivate(this), parent)
{
    setRequest(new SignalResourceRequest(request));
    setReply(reply);
}

const SignalResourceRequest * SignalResourceResponse::request() const
{
    Q_D(const SignalResourceResponse);
    return static_cast<const SignalResourceRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation SignalResource response.
 *
 * @param  response  Response to parse.
 */
void SignalResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SignalResourceResponsePrivate
 *
 * @brief  Private implementation for SignalResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SignalResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SignalResourceResponse instance.
 */
SignalResourceResponsePrivate::SignalResourceResponsePrivate(
    SignalResourceQueueResponse * const q) : SignalResourcePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation SignalResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SignalResourceResponsePrivate::SignalResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignalResourceResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
