// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
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
