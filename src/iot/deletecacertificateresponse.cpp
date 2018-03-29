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

#include "deletecacertificateresponse.h"
#include "deletecacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteCACertificateResponse
 *
 * @brief  Handles IoT DeleteCACertificate responses.
 *
 * @see    IoTClient::deleteCACertificate
 */

/**
 * @brief  Constructs a new DeleteCACertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCACertificateResponse::DeleteCACertificateResponse(
        const DeleteCACertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteCACertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteCACertificateRequest(request));
    setReply(reply);
}

const DeleteCACertificateRequest * DeleteCACertificateResponse::request() const
{
    Q_D(const DeleteCACertificateResponse);
    return static_cast<const DeleteCACertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteCACertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteCACertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCACertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCACertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteCACertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCACertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCACertificateResponse instance.
 */
DeleteCACertificateResponsePrivate::DeleteCACertificateResponsePrivate(
    DeleteCACertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteCACertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCACertificateResponsePrivate::DeleteCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCACertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
