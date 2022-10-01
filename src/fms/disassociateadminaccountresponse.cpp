// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateadminaccountresponse.h"
#include "disassociateadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DisassociateAdminAccountResponse
 * \brief The DisassociateAdminAccountResponse class provides an interace for Fms DisassociateAdminAccount responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::disassociateAdminAccount
 */

/*!
 * Constructs a DisassociateAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAdminAccountResponse::DisassociateAdminAccountResponse(
        const DisassociateAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new DisassociateAdminAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAdminAccountRequest * DisassociateAdminAccountResponse::request() const
{
    Q_D(const DisassociateAdminAccountResponse);
    return static_cast<const DisassociateAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms DisassociateAdminAccount \a response.
 */
void DisassociateAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::DisassociateAdminAccountResponsePrivate
 * \brief The DisassociateAdminAccountResponsePrivate class provides private implementation for DisassociateAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DisassociateAdminAccountResponsePrivate object with public implementation \a q.
 */
DisassociateAdminAccountResponsePrivate::DisassociateAdminAccountResponsePrivate(
    DisassociateAdminAccountResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms DisassociateAdminAccount response element from \a xml.
 */
void DisassociateAdminAccountResponsePrivate::parseDisassociateAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
