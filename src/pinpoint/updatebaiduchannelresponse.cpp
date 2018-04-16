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

#include "updatebaiduchannelresponse.h"
#include "updatebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelResponse
 *
 * \brief The UpdateBaiduChannelResponse class provides an interace for Pinpoint UpdateBaiduChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::updateBaiduChannel
 */

/*!
 * @brief  Constructs a new UpdateBaiduChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBaiduChannelResponse::UpdateBaiduChannelResponse(
        const UpdateBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateBaiduChannelRequest(request));
    setReply(reply);
}

const UpdateBaiduChannelRequest * UpdateBaiduChannelResponse::request() const
{
    Q_D(const UpdateBaiduChannelResponse);
    return static_cast<const UpdateBaiduChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint UpdateBaiduChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateBaiduChannelResponsePrivate
 *
 * \brief Private implementation for UpdateBaiduChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateBaiduChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBaiduChannelResponse instance.
 */
UpdateBaiduChannelResponsePrivate::UpdateBaiduChannelResponsePrivate(
    UpdateBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint UpdateBaiduChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBaiduChannelResponsePrivate::parseUpdateBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBaiduChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
