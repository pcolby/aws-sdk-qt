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

#include "putparameterresponse.h"
#include "putparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  PutParameterResponse
 *
 * @brief  Handles SSM PutParameter responses.
 *
 * @see    SSMClient::putParameter
 */

/**
 * @brief  Constructs a new PutParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutParameterResponse::PutParameterResponse(
        const PutParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new PutParameterResponsePrivate(this), parent)
{
    setRequest(new PutParameterRequest(request));
    setReply(reply);
}

const PutParameterRequest * PutParameterResponse::request() const
{
    Q_D(const PutParameterResponse);
    return static_cast<const PutParameterRequest *>(d->request);
}

/**
 * @brief  Parse a SSM PutParameter response.
 *
 * @param  response  Response to parse.
 */
void PutParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutParameterResponsePrivate
 *
 * @brief  Private implementation for PutParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutParameterResponse instance.
 */
PutParameterResponsePrivate::PutParameterResponsePrivate(
    PutParameterQueueResponse * const q) : PutParameterPrivate(q)
{

}

/**
 * @brief  Parse an SSM PutParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutParameterResponsePrivate::PutParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutParameterResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
