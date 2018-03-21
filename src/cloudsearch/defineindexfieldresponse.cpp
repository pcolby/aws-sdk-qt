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

#include "defineindexfieldresponse.h"
#include "defineindexfieldresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DefineIndexFieldResponse
 *
 * @brief  Handles CloudSearch DefineIndexField responses.
 *
 * @see    CloudSearchClient::defineIndexField
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DefineIndexFieldResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineIndexFieldResponsePrivate(this), parent)
{
    setRequest(new DefineIndexFieldRequest(request));
    setReply(reply);
}

const DefineIndexFieldRequest * DefineIndexFieldResponse::request() const
{
    Q_D(const DefineIndexFieldResponse);
    return static_cast<const DefineIndexFieldRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DefineIndexField response.
 *
 * @param  response  Response to parse.
 */
void DefineIndexFieldResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DefineIndexFieldResponsePrivate
 *
 * @brief  Private implementation for DefineIndexFieldResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineIndexFieldResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DefineIndexFieldResponse instance.
 */
DefineIndexFieldResponsePrivate::DefineIndexFieldResponsePrivate(
    DefineIndexFieldQueueResponse * const q) : DefineIndexFieldPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DefineIndexFieldResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DefineIndexFieldResponsePrivate::DefineIndexFieldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineIndexFieldResponse"));
    /// @todo
}
