/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The DisassociateRoleFromGroupResponse class provides an interace for Greengrass DisassociateRoleFromGroup responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::disassociateRoleFromGroup
 */

/*!
 * Constructs a DisassociateRoleFromGroupResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DisassociateRoleFromGroupRequest * DisassociateRoleFromGroupResponse::request() const
{
    Q_D(const DisassociateRoleFromGroupResponse);
    return static_cast<const DisassociateRoleFromGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DisassociateRoleFromGroup \a response.
 */
void DisassociateRoleFromGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateRoleFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupResponsePrivate
 * \brief The DisassociateRoleFromGroupResponsePrivate class provides private implementation for DisassociateRoleFromGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateRoleFromGroupResponsePrivate object with public implementation \a q.
 */
DisassociateRoleFromGroupResponsePrivate::DisassociateRoleFromGroupResponsePrivate(
    DisassociateRoleFromGroupResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DisassociateRoleFromGroup response element from \a xml.
 */
void DisassociateRoleFromGroupResponsePrivate::parseDisassociateRoleFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRoleFromGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
