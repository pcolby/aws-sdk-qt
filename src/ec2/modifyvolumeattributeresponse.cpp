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

#include "modifyvolumeattributeresponse.h"
#include "modifyvolumeattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVolumeAttributeResponse
 *
 * \brief The ModifyVolumeAttributeResponse class encapsulates EC2 ModifyVolumeAttribute responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::modifyVolumeAttribute
 */

/*!
 * @brief  Constructs a new ModifyVolumeAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVolumeAttributeResponse::ModifyVolumeAttributeResponse(
        const ModifyVolumeAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVolumeAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyVolumeAttributeRequest(request));
    setReply(reply);
}

const ModifyVolumeAttributeRequest * ModifyVolumeAttributeResponse::request() const
{
    Q_D(const ModifyVolumeAttributeResponse);
    return static_cast<const ModifyVolumeAttributeRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 ModifyVolumeAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyVolumeAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVolumeAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ModifyVolumeAttributeResponsePrivate
 *
 * \brief Private implementation for ModifyVolumeAttributeResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVolumeAttributeResponse instance.
 */
ModifyVolumeAttributeResponsePrivate::ModifyVolumeAttributeResponsePrivate(
    ModifyVolumeAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 ModifyVolumeAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVolumeAttributeResponsePrivate::parseModifyVolumeAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVolumeAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
