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

#include "putevaluationsresponse.h"
#include "putevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutEvaluationsResponse
 *
 * @brief  Handles ConfigService PutEvaluations responses.
 *
 * @see    ConfigServiceClient::putEvaluations
 */

/**
 * @brief  Constructs a new PutEvaluationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEvaluationsResponse::PutEvaluationsResponse(
        const PutEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutEvaluationsResponsePrivate(this), parent)
{
    setRequest(new PutEvaluationsRequest(request));
    setReply(reply);
}

const PutEvaluationsRequest * PutEvaluationsResponse::request() const
{
    Q_D(const PutEvaluationsResponse);
    return static_cast<const PutEvaluationsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutEvaluations response.
 *
 * @param  response  Response to parse.
 */
void PutEvaluationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutEvaluationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutEvaluationsResponsePrivate
 *
 * @brief  Private implementation for PutEvaluationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEvaluationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutEvaluationsResponse instance.
 */
PutEvaluationsResponsePrivate::PutEvaluationsResponsePrivate(
    PutEvaluationsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutEvaluationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEvaluationsResponsePrivate::PutEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEvaluationsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
