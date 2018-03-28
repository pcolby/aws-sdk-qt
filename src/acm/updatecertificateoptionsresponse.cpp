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

#include "updatecertificateoptionsresponse.h"
#include "updatecertificateoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ACM {

/**
 * @class  UpdateCertificateOptionsResponse
 *
 * @brief  Handles ACM UpdateCertificateOptions responses.
 *
 * @see    ACMClient::updateCertificateOptions
 */

/**
 * @brief  Constructs a new UpdateCertificateOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCertificateOptionsResponse::UpdateCertificateOptionsResponse(
        const UpdateCertificateOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new UpdateCertificateOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateOptionsRequest(request));
    setReply(reply);
}

const UpdateCertificateOptionsRequest * UpdateCertificateOptionsResponse::request() const
{
    Q_D(const UpdateCertificateOptionsResponse);
    return static_cast<const UpdateCertificateOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a ACM UpdateCertificateOptions response.
 *
 * @param  response  Response to parse.
 */
void UpdateCertificateOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCertificateOptionsResponsePrivate
 *
 * @brief  Private implementation for UpdateCertificateOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCertificateOptionsResponse instance.
 */
UpdateCertificateOptionsResponsePrivate::UpdateCertificateOptionsResponsePrivate(
    UpdateCertificateOptionsQueueResponse * const q) : UpdateCertificateOptionsPrivate(q)
{

}

/**
 * @brief  Parse an ACM UpdateCertificateOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCertificateOptionsResponsePrivate::UpdateCertificateOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateOptionsResponse"));
    /// @todo
}

} // namespace ACM
} // namespace AWS
