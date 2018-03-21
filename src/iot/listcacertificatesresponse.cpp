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

#include "listcacertificatesresponse.h"
#include "listcacertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListCACertificatesResponse
 *
 * @brief  Handles IoT ListCACertificates responses.
 *
 * @see    IoTClient::listCACertificates
 */

/**
 * @brief  Constructs a new ListCACertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCACertificatesResponse::ListCACertificatesResponse(
        const ListCACertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListCACertificatesResponsePrivate(this), parent)
{
    setRequest(new ListCACertificatesRequest(request));
    setReply(reply);
}

const ListCACertificatesRequest * ListCACertificatesResponse::request() const
{
    Q_D(const ListCACertificatesResponse);
    return static_cast<const ListCACertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListCACertificates response.
 *
 * @param  response  Response to parse.
 */
void ListCACertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCACertificatesResponsePrivate
 *
 * @brief  Private implementation for ListCACertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCACertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCACertificatesResponse instance.
 */
ListCACertificatesResponsePrivate::ListCACertificatesResponsePrivate(
    ListCACertificatesQueueResponse * const q) : ListCACertificatesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListCACertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCACertificatesResponsePrivate::ListCACertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCACertificatesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
