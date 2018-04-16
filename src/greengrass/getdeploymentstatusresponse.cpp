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

#include "getdeploymentstatusresponse.h"
#include "getdeploymentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusResponse
 *
 * \brief The GetDeploymentStatusResponse class provides an interace for Greengrass GetDeploymentStatus responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getDeploymentStatus
 */

/*!
 * @brief  Constructs a new GetDeploymentStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentStatusResponse::GetDeploymentStatusResponse(
        const GetDeploymentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeploymentStatusResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentStatusRequest(request));
    setReply(reply);
}

const GetDeploymentStatusRequest * GetDeploymentStatusResponse::request() const
{
    Q_D(const GetDeploymentStatusResponse);
    return static_cast<const GetDeploymentStatusRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass GetDeploymentStatus response.
 *
 * @param  response  Response to parse.
 */
void GetDeploymentStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDeploymentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDeploymentStatusResponsePrivate
 *
 * \brief Private implementation for GetDeploymentStatusResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeploymentStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeploymentStatusResponse instance.
 */
GetDeploymentStatusResponsePrivate::GetDeploymentStatusResponsePrivate(
    GetDeploymentStatusResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass GetDeploymentStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeploymentStatusResponsePrivate::parseGetDeploymentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentStatusResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
