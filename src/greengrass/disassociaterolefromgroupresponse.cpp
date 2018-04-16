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

#include "disassociaterolefromgroupresponse.h"
#include "disassociaterolefromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupResponse
 *
 * \brief The DisassociateRoleFromGroupResponse class provides an interace for Greengrass DisassociateRoleFromGroup responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::disassociateRoleFromGroup
 */

/*!
 * @brief  Constructs a new DisassociateRoleFromGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateRoleFromGroupResponse::DisassociateRoleFromGroupResponse(
        const DisassociateRoleFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DisassociateRoleFromGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateRoleFromGroupRequest(request));
    setReply(reply);
}

const DisassociateRoleFromGroupRequest * DisassociateRoleFromGroupResponse::request() const
{
    Q_D(const DisassociateRoleFromGroupResponse);
    return static_cast<const DisassociateRoleFromGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass DisassociateRoleFromGroup response.
 *
 * @param  response  Response to parse.
 */
void DisassociateRoleFromGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateRoleFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateRoleFromGroupResponsePrivate
 *
 * \brief Private implementation for DisassociateRoleFromGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateRoleFromGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateRoleFromGroupResponse instance.
 */
DisassociateRoleFromGroupResponsePrivate::DisassociateRoleFromGroupResponsePrivate(
    DisassociateRoleFromGroupResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass DisassociateRoleFromGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateRoleFromGroupResponsePrivate::parseDisassociateRoleFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRoleFromGroupResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
