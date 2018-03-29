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

#include "gettypedlinkfacetinformationresponse.h"
#include "gettypedlinkfacetinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetTypedLinkFacetInformationResponse
 *
 * @brief  Handles CloudDirectory GetTypedLinkFacetInformation responses.
 *
 * @see    CloudDirectoryClient::getTypedLinkFacetInformation
 */

/**
 * @brief  Constructs a new GetTypedLinkFacetInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTypedLinkFacetInformationResponse::GetTypedLinkFacetInformationResponse(
        const GetTypedLinkFacetInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetTypedLinkFacetInformationResponsePrivate(this), parent)
{
    setRequest(new GetTypedLinkFacetInformationRequest(request));
    setReply(reply);
}

const GetTypedLinkFacetInformationRequest * GetTypedLinkFacetInformationResponse::request() const
{
    Q_D(const GetTypedLinkFacetInformationResponse);
    return static_cast<const GetTypedLinkFacetInformationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetTypedLinkFacetInformation response.
 *
 * @param  response  Response to parse.
 */
void GetTypedLinkFacetInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTypedLinkFacetInformationResponsePrivate
 *
 * @brief  Private implementation for GetTypedLinkFacetInformationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTypedLinkFacetInformationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTypedLinkFacetInformationResponse instance.
 */
GetTypedLinkFacetInformationResponsePrivate::GetTypedLinkFacetInformationResponsePrivate(
    GetTypedLinkFacetInformationQueueResponse * const q) : GetTypedLinkFacetInformationPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetTypedLinkFacetInformationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTypedLinkFacetInformationResponsePrivate::GetTypedLinkFacetInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypedLinkFacetInformationResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
