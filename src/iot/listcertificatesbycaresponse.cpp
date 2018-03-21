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

#include "listcertificatesbycaresponse.h"
#include "listcertificatesbycaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListCertificatesByCAResponse
 *
 * @brief  Handles IoT ListCertificatesByCA responses.
 *
 * @see    IoTClient::listCertificatesByCA
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCertificatesByCAResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListCertificatesByCAResponsePrivate(this), parent)
{
    setRequest(new ListCertificatesByCARequest(request));
    setReply(reply);
}

const ListCertificatesByCARequest * ListCertificatesByCAResponse::request() const
{
    Q_D(const ListCertificatesByCAResponse);
    return static_cast<const ListCertificatesByCARequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListCertificatesByCA response.
 *
 * @param  response  Response to parse.
 */
void ListCertificatesByCAResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCertificatesByCAResponsePrivate
 *
 * @brief  Private implementation for ListCertificatesByCAResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificatesByCAResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCertificatesByCAResponse instance.
 */
ListCertificatesByCAResponsePrivate::ListCertificatesByCAResponsePrivate(
    ListCertificatesByCAQueueResponse * const q) : ListCertificatesByCAPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListCertificatesByCAResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCertificatesByCAResponsePrivate::ListCertificatesByCAResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificatesByCAResponse"));
    /// @todo
}
