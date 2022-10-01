// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateservicerolefromaccountresponse.h"
#include "disassociateservicerolefromaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountResponse
 * \brief The DisassociateServiceRoleFromAccountResponse class provides an interace for Greengrass DisassociateServiceRoleFromAccount responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::disassociateServiceRoleFromAccount
 */

/*!
 * Constructs a DisassociateServiceRoleFromAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateServiceRoleFromAccountResponse::DisassociateServiceRoleFromAccountResponse(
        const DisassociateServiceRoleFromAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DisassociateServiceRoleFromAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceRoleFromAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateServiceRoleFromAccountRequest * DisassociateServiceRoleFromAccountResponse::request() const
{
    Q_D(const DisassociateServiceRoleFromAccountResponse);
    return static_cast<const DisassociateServiceRoleFromAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DisassociateServiceRoleFromAccount \a response.
 */
void DisassociateServiceRoleFromAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateServiceRoleFromAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountResponsePrivate
 * \brief The DisassociateServiceRoleFromAccountResponsePrivate class provides private implementation for DisassociateServiceRoleFromAccountResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateServiceRoleFromAccountResponsePrivate object with public implementation \a q.
 */
DisassociateServiceRoleFromAccountResponsePrivate::DisassociateServiceRoleFromAccountResponsePrivate(
    DisassociateServiceRoleFromAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DisassociateServiceRoleFromAccount response element from \a xml.
 */
void DisassociateServiceRoleFromAccountResponsePrivate::parseDisassociateServiceRoleFromAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceRoleFromAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
