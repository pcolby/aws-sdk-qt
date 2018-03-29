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

#include "getshippinglabelresponse.h"
#include "getshippinglabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/**
 * @class  GetShippingLabelResponse
 *
 * @brief  Handles ImportExport GetShippingLabel responses.
 *
 * @see    ImportExportClient::getShippingLabel
 */

/**
 * @brief  Constructs a new GetShippingLabelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetShippingLabelResponse::GetShippingLabelResponse(
        const GetShippingLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new GetShippingLabelResponsePrivate(this), parent)
{
    setRequest(new GetShippingLabelRequest(request));
    setReply(reply);
}

const GetShippingLabelRequest * GetShippingLabelResponse::request() const
{
    Q_D(const GetShippingLabelResponse);
    return static_cast<const GetShippingLabelRequest *>(d->request);
}

/**
 * @brief  Parse a ImportExport GetShippingLabel response.
 *
 * @param  response  Response to parse.
 */
void GetShippingLabelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetShippingLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetShippingLabelResponsePrivate
 *
 * @brief  Private implementation for GetShippingLabelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetShippingLabelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetShippingLabelResponse instance.
 */
GetShippingLabelResponsePrivate::GetShippingLabelResponsePrivate(
    GetShippingLabelResponse * const q) : ImportExportResponsePrivate(q)
{

}

/**
 * @brief  Parse an ImportExport GetShippingLabelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetShippingLabelResponsePrivate::parseGetShippingLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShippingLabelResponse"));
    /// @todo
}

} // namespace ImportExport
} // namespace QtAws
