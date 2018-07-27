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

#include "associateserviceroletoaccountresponse.h"
#include "associateserviceroletoaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::AssociateServiceRoleToAccountResponse
 * \brief The AssociateServiceRoleToAccountResponse class provides an interace for Greengrass AssociateServiceRoleToAccount responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::associateServiceRoleToAccount
 */

/*!
 * Constructs a AssociateServiceRoleToAccountResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateServiceRoleToAccountResponse::AssociateServiceRoleToAccountResponse(
        const AssociateServiceRoleToAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new AssociateServiceRoleToAccountResponsePrivate(this), parent)
{
    setRequest(new AssociateServiceRoleToAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateServiceRoleToAccountRequest * AssociateServiceRoleToAccountResponse::request() const
{
    Q_D(const AssociateServiceRoleToAccountResponse);
    return static_cast<const AssociateServiceRoleToAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass AssociateServiceRoleToAccount \a response.
 */
void AssociateServiceRoleToAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateServiceRoleToAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::AssociateServiceRoleToAccountResponsePrivate
 * \brief The AssociateServiceRoleToAccountResponsePrivate class provides private implementation for AssociateServiceRoleToAccountResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a AssociateServiceRoleToAccountResponsePrivate object with public implementation \a q.
 */
AssociateServiceRoleToAccountResponsePrivate::AssociateServiceRoleToAccountResponsePrivate(
    AssociateServiceRoleToAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass AssociateServiceRoleToAccount response element from \a xml.
 */
void AssociateServiceRoleToAccountResponsePrivate::parseAssociateServiceRoleToAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateServiceRoleToAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
