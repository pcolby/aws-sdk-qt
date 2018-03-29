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

#include "describedomaincontrollersresponse.h"
#include "describedomaincontrollersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeDomainControllersResponse
 *
 * @brief  Handles DirectoryService DescribeDomainControllers responses.
 *
 * @see    DirectoryServiceClient::describeDomainControllers
 */

/**
 * @brief  Constructs a new DescribeDomainControllersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDomainControllersResponse::DescribeDomainControllersResponse(
        const DescribeDomainControllersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeDomainControllersResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainControllersRequest(request));
    setReply(reply);
}

const DescribeDomainControllersRequest * DescribeDomainControllersResponse::request() const
{
    Q_D(const DescribeDomainControllersResponse);
    return static_cast<const DescribeDomainControllersRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeDomainControllers response.
 *
 * @param  response  Response to parse.
 */
void DescribeDomainControllersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDomainControllersResponsePrivate
 *
 * @brief  Private implementation for DescribeDomainControllersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainControllersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDomainControllersResponse instance.
 */
DescribeDomainControllersResponsePrivate::DescribeDomainControllersResponsePrivate(
    DescribeDomainControllersQueueResponse * const q) : DescribeDomainControllersPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeDomainControllersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDomainControllersResponsePrivate::DescribeDomainControllersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainControllersResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
