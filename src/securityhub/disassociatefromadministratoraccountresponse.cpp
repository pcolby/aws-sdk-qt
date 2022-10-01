// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefromadministratoraccountresponse.h"
#include "disassociatefromadministratoraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DisassociateFromAdministratorAccountResponse
 * \brief The DisassociateFromAdministratorAccountResponse class provides an interace for SecurityHub DisassociateFromAdministratorAccount responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your Amazon Web Services environment and
 *  resources. It also provides you with the readiness status of your environment based on controls from supported security
 *  standards. Security Hub collects security data from Amazon Web Services accounts, services, and integrated third-party
 *  products and helps you analyze security trends in your environment to identify the highest priority security issues. For
 *  more information about Security Hub, see the <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html"> <i>Security HubUser Guide</i>
 * 
 *  </a>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the Amazon Web Services Region that
 *  is currently active or in the specific Amazon Web Services Region that you specify in your request. Any configuration or
 *  settings change that results from the operation is applied only to that Region. To make the same change in other
 *  Regions, execute the same command for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code>CreateMembers</code> to add a member
 *  account to Security Hub, the association of the member account with the administrator account is created only in the
 *  <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchEnableStandards</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 1 request
 *  per
 * 
 *  second> </li> <li>
 * 
 *  <code>GetFindings</code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6 requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchImportFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchUpdateFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>UpdateStandardsControl</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::disassociateFromAdministratorAccount
 */

/*!
 * Constructs a DisassociateFromAdministratorAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFromAdministratorAccountResponse::DisassociateFromAdministratorAccountResponse(
        const DisassociateFromAdministratorAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new DisassociateFromAdministratorAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateFromAdministratorAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateFromAdministratorAccountRequest * DisassociateFromAdministratorAccountResponse::request() const
{
    Q_D(const DisassociateFromAdministratorAccountResponse);
    return static_cast<const DisassociateFromAdministratorAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub DisassociateFromAdministratorAccount \a response.
 */
void DisassociateFromAdministratorAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateFromAdministratorAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::DisassociateFromAdministratorAccountResponsePrivate
 * \brief The DisassociateFromAdministratorAccountResponsePrivate class provides private implementation for DisassociateFromAdministratorAccountResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DisassociateFromAdministratorAccountResponsePrivate object with public implementation \a q.
 */
DisassociateFromAdministratorAccountResponsePrivate::DisassociateFromAdministratorAccountResponsePrivate(
    DisassociateFromAdministratorAccountResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub DisassociateFromAdministratorAccount response element from \a xml.
 */
void DisassociateFromAdministratorAccountResponsePrivate::parseDisassociateFromAdministratorAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFromAdministratorAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
