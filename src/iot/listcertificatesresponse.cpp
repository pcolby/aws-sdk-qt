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

#include "listcertificatesresponse.h"
#include "listcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListCertificatesResponse
 *
 * @brief  Handles IoT ListCertificates responses.
 *
 * @see    IoTClient::listCertificates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCertificatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListCertificatesRequest(request));
    setReply(reply);
}

const ListCertificatesRequest * ListCertificatesResponse::request() const
{
    Q_D(const ListCertificatesResponse);
    return static_cast<const ListCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListCertificates response.
 *
 * @param  response  Response to parse.
 */
void ListCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCertificatesResponsePrivate
 *
 * @brief  Private implementation for ListCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCertificatesResponse instance.
 */
ListCertificatesResponsePrivate::ListCertificatesResponsePrivate(
    ListCertificatesQueueResponse * const q) : ListCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCertificatesResponsePrivate::ListCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificatesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
