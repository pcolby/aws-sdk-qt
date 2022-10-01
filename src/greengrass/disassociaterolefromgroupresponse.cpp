// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
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
