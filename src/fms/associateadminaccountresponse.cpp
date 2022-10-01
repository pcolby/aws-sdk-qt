/*
    Copyright 2013-2021 Paul Colby

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

#include "associateadminaccountresponse.h"
#include "associateadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::AssociateAdminAccountResponse
 * \brief The AssociateAdminAccountResponse class provides an interace for Fms AssociateAdminAccount responses.
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
 * \sa FmsClient::associateAdminAccount
 */

/*!
 * Constructs a AssociateAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateAdminAccountResponse::AssociateAdminAccountResponse(
        const AssociateAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new AssociateAdminAccountResponsePrivate(this), parent)
{
    setRequest(new AssociateAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateAdminAccountRequest * AssociateAdminAccountResponse::request() const
{
    Q_D(const AssociateAdminAccountResponse);
    return static_cast<const AssociateAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms AssociateAdminAccount \a response.
 */
void AssociateAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::AssociateAdminAccountResponsePrivate
 * \brief The AssociateAdminAccountResponsePrivate class provides private implementation for AssociateAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a AssociateAdminAccountResponsePrivate object with public implementation \a q.
 */
AssociateAdminAccountResponsePrivate::AssociateAdminAccountResponsePrivate(
    AssociateAdminAccountResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms AssociateAdminAccount response element from \a xml.
 */
void AssociateAdminAccountResponsePrivate::parseAssociateAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
