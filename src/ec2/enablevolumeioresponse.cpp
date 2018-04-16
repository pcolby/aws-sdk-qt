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

#include "enablevolumeioresponse.h"
#include "enablevolumeioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EnableVolumeIOResponse
 *
 * \brief The EnableVolumeIOResponse class encapsulates EC2 EnableVolumeIO responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::enableVolumeIO
 */

/*!
 * @brief  Constructs a new EnableVolumeIOResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableVolumeIOResponse::EnableVolumeIOResponse(
        const EnableVolumeIORequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new EnableVolumeIOResponsePrivate(this), parent)
{
    setRequest(new EnableVolumeIORequest(request));
    setReply(reply);
}

const EnableVolumeIORequest * EnableVolumeIOResponse::request() const
{
    Q_D(const EnableVolumeIOResponse);
    return static_cast<const EnableVolumeIORequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 EnableVolumeIO response.
 *
 * @param  response  Response to parse.
 */
void EnableVolumeIOResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableVolumeIOResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class EnableVolumeIOResponsePrivate
 *
 * \brief Private implementation for EnableVolumeIOResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableVolumeIOResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableVolumeIOResponse instance.
 */
EnableVolumeIOResponsePrivate::EnableVolumeIOResponsePrivate(
    EnableVolumeIOResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 EnableVolumeIOResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableVolumeIOResponsePrivate::parseEnableVolumeIOResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVolumeIOResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
