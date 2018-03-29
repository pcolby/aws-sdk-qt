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

#include "deleteparameterresponse.h"
#include "deleteparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteParameterResponse
 *
 * @brief  Handles SSM DeleteParameter responses.
 *
 * @see    SSMClient::deleteParameter
 */

/**
 * @brief  Constructs a new DeleteParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteParameterResponse::DeleteParameterResponse(
        const DeleteParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteParameterResponse(new DeleteParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterRequest(request));
    setReply(reply);
}

const DeleteParameterRequest * DeleteParameterResponse::request() const
{
    Q_D(const DeleteParameterResponse);
    return static_cast<const DeleteParameterRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteParameter response.
 *
 * @param  response  Response to parse.
 */
void DeleteParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteParameterResponsePrivate
 *
 * @brief  Private implementation for DeleteParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteParameterResponse instance.
 */
DeleteParameterResponsePrivate::DeleteParameterResponsePrivate(
    DeleteParameterResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteParameterResponsePrivate::parseDeleteParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
