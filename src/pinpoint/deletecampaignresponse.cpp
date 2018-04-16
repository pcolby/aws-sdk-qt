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

#include "deletecampaignresponse.h"
#include "deletecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteCampaignResponse
 *
 * \brief The DeleteCampaignResponse class provides an interace for Pinpoint DeleteCampaign responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteCampaign
 */

/*!
 * @brief  Constructs a new DeleteCampaignResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCampaignResponse::DeleteCampaignResponse(
        const DeleteCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteCampaignResponsePrivate(this), parent)
{
    setRequest(new DeleteCampaignRequest(request));
    setReply(reply);
}

const DeleteCampaignRequest * DeleteCampaignResponse::request() const
{
    Q_D(const DeleteCampaignResponse);
    return static_cast<const DeleteCampaignRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint DeleteCampaign response.
 *
 * @param  response  Response to parse.
 */
void DeleteCampaignResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteCampaignResponsePrivate
 *
 * \brief Private implementation for DeleteCampaignResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCampaignResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCampaignResponse instance.
 */
DeleteCampaignResponsePrivate::DeleteCampaignResponsePrivate(
    DeleteCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint DeleteCampaignResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCampaignResponsePrivate::parseDeleteCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCampaignResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
