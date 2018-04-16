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

#include "updatecampaignresponse.h"
#include "updatecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateCampaignResponse
 *
 * \brief The UpdateCampaignResponse class provides an interace for Pinpoint UpdateCampaign responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::updateCampaign
 */

/*!
 * @brief  Constructs a new UpdateCampaignResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCampaignResponse::UpdateCampaignResponse(
        const UpdateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateCampaignResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignRequest(request));
    setReply(reply);
}

const UpdateCampaignRequest * UpdateCampaignResponse::request() const
{
    Q_D(const UpdateCampaignResponse);
    return static_cast<const UpdateCampaignRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint UpdateCampaign response.
 *
 * @param  response  Response to parse.
 */
void UpdateCampaignResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateCampaignResponsePrivate
 *
 * \brief Private implementation for UpdateCampaignResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateCampaignResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCampaignResponse instance.
 */
UpdateCampaignResponsePrivate::UpdateCampaignResponsePrivate(
    UpdateCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint UpdateCampaignResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCampaignResponsePrivate::parseUpdateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
