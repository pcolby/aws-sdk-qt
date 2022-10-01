// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassociatedroleresponse.h"
#include "getassociatedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleResponse
 * \brief The GetAssociatedRoleResponse class provides an interace for Greengrass GetAssociatedRole responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getAssociatedRole
 */

/*!
 * Constructs a GetAssociatedRoleResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssociatedRoleResponse::GetAssociatedRoleResponse(
        const GetAssociatedRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetAssociatedRoleResponsePrivate(this), parent)
{
    setRequest(new GetAssociatedRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssociatedRoleRequest * GetAssociatedRoleResponse::request() const
{
    Q_D(const GetAssociatedRoleResponse);
    return static_cast<const GetAssociatedRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetAssociatedRole \a response.
 */
void GetAssociatedRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssociatedRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleResponsePrivate
 * \brief The GetAssociatedRoleResponsePrivate class provides private implementation for GetAssociatedRoleResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetAssociatedRoleResponsePrivate object with public implementation \a q.
 */
GetAssociatedRoleResponsePrivate::GetAssociatedRoleResponsePrivate(
    GetAssociatedRoleResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetAssociatedRole response element from \a xml.
 */
void GetAssociatedRoleResponsePrivate::parseGetAssociatedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssociatedRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
