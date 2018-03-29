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

#include "createreservedinstanceslistingresponse.h"
#include "createreservedinstanceslistingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateReservedInstancesListingResponse
 *
 * @brief  Handles EC2 CreateReservedInstancesListing responses.
 *
 * @see    EC2Client::createReservedInstancesListing
 */

/**
 * @brief  Constructs a new CreateReservedInstancesListingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReservedInstancesListingResponse::CreateReservedInstancesListingResponse(
        const CreateReservedInstancesListingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateReservedInstancesListingResponsePrivate(this), parent)
{
    setRequest(new CreateReservedInstancesListingRequest(request));
    setReply(reply);
}

const CreateReservedInstancesListingRequest * CreateReservedInstancesListingResponse::request() const
{
    Q_D(const CreateReservedInstancesListingResponse);
    return static_cast<const CreateReservedInstancesListingRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateReservedInstancesListing response.
 *
 * @param  response  Response to parse.
 */
void CreateReservedInstancesListingResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateReservedInstancesListingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReservedInstancesListingResponsePrivate
 *
 * @brief  Private implementation for CreateReservedInstancesListingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReservedInstancesListingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReservedInstancesListingResponse instance.
 */
CreateReservedInstancesListingResponsePrivate::CreateReservedInstancesListingResponsePrivate(
    CreateReservedInstancesListingResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateReservedInstancesListingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReservedInstancesListingResponsePrivate::parseCreateReservedInstancesListingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReservedInstancesListingResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
