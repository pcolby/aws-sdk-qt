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

#include "createbgppeerresponse.h"
#include "createbgppeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateBGPPeerResponse
 *
 * \brief The CreateBGPPeerResponse class encapsulates DirectConnect CreateBGPPeer responses.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::createBGPPeer
 */

/*!
 * @brief  Constructs a new CreateBGPPeerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBGPPeerResponse::CreateBGPPeerResponse(
        const CreateBGPPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateBGPPeerResponsePrivate(this), parent)
{
    setRequest(new CreateBGPPeerRequest(request));
    setReply(reply);
}

const CreateBGPPeerRequest * CreateBGPPeerResponse::request() const
{
    Q_D(const CreateBGPPeerResponse);
    return static_cast<const CreateBGPPeerRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectConnect CreateBGPPeer response.
 *
 * @param  response  Response to parse.
 */
void CreateBGPPeerResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateBGPPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateBGPPeerResponsePrivate
 *
 * \brief Private implementation for CreateBGPPeerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateBGPPeerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBGPPeerResponse instance.
 */
CreateBGPPeerResponsePrivate::CreateBGPPeerResponsePrivate(
    CreateBGPPeerResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectConnect CreateBGPPeerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBGPPeerResponsePrivate::parseCreateBGPPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBGPPeerResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
