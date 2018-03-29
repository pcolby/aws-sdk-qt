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

#include "listoutgoingcertificatesresponse.h"
#include "listoutgoingcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListOutgoingCertificatesResponse
 *
 * @brief  Handles IoT ListOutgoingCertificates responses.
 *
 * @see    IoTClient::listOutgoingCertificates
 */

/**
 * @brief  Constructs a new ListOutgoingCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOutgoingCertificatesResponse::ListOutgoingCertificatesResponse(
        const ListOutgoingCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListOutgoingCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListOutgoingCertificatesRequest(request));
    setReply(reply);
}

const ListOutgoingCertificatesRequest * ListOutgoingCertificatesResponse::request() const
{
    Q_D(const ListOutgoingCertificatesResponse);
    return static_cast<const ListOutgoingCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListOutgoingCertificates response.
 *
 * @param  response  Response to parse.
 */
void ListOutgoingCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOutgoingCertificatesResponsePrivate
 *
 * @brief  Private implementation for ListOutgoingCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOutgoingCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOutgoingCertificatesResponse instance.
 */
ListOutgoingCertificatesResponsePrivate::ListOutgoingCertificatesResponsePrivate(
    ListOutgoingCertificatesQueueResponse * const q) : ListOutgoingCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListOutgoingCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOutgoingCertificatesResponsePrivate::ListOutgoingCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOutgoingCertificatesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
