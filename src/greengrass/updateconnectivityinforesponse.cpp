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

#include "updateconnectivityinforesponse.h"
#include "updateconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoResponse
 *
 * \brief The UpdateConnectivityInfoResponse class provides an interace for Greengrass UpdateConnectivityInfo responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateConnectivityInfo
 */

/*!
 * @brief  Constructs a new UpdateConnectivityInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConnectivityInfoResponse::UpdateConnectivityInfoResponse(
        const UpdateConnectivityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityInfoRequest(request));
    setReply(reply);
}

const UpdateConnectivityInfoRequest * UpdateConnectivityInfoResponse::request() const
{
    Q_D(const UpdateConnectivityInfoResponse);
    return static_cast<const UpdateConnectivityInfoRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass UpdateConnectivityInfo response.
 *
 * @param  response  Response to parse.
 */
void UpdateConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConnectivityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateConnectivityInfoResponsePrivate
 *
 * \brief Private implementation for UpdateConnectivityInfoResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateConnectivityInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConnectivityInfoResponse instance.
 */
UpdateConnectivityInfoResponsePrivate::UpdateConnectivityInfoResponsePrivate(
    UpdateConnectivityInfoResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass UpdateConnectivityInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConnectivityInfoResponsePrivate::parseUpdateConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityInfoResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
