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

#include "getcampaignversionsresponse.h"
#include "getcampaignversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsResponse
 *
 * \brief The GetCampaignVersionsResponse class provides an interace for Pinpoint GetCampaignVersions responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * @brief  Constructs a new GetCampaignVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignVersionsResponse::GetCampaignVersionsResponse(
        const GetCampaignVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionsRequest(request));
    setReply(reply);
}

const GetCampaignVersionsRequest * GetCampaignVersionsResponse::request() const
{
    Q_D(const GetCampaignVersionsResponse);
    return static_cast<const GetCampaignVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetCampaignVersions response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCampaignVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetCampaignVersionsResponsePrivate
 *
 * \brief Private implementation for GetCampaignVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignVersionsResponse instance.
 */
GetCampaignVersionsResponsePrivate::GetCampaignVersionsResponsePrivate(
    GetCampaignVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetCampaignVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignVersionsResponsePrivate::parseGetCampaignVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
