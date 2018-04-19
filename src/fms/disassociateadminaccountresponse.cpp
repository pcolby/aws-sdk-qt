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

#include "disassociateadminaccountresponse.h"
#include "disassociateadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DisassociateAdminAccountResponse
 * \brief The DisassociateAdminAccountResponse class provides an interace for FMS DisassociateAdminAccount responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
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
    : FMSResponse(new DisassociateAdminAccountResponsePrivate(this), parent)
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
 * Parses a successful FMS DisassociateAdminAccount \a response.
 */
void DisassociateAdminAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::DisassociateAdminAccountResponsePrivate
 * \brief The DisassociateAdminAccountResponsePrivate class provides private implementation for DisassociateAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a DisassociateAdminAccountResponsePrivate object with public implementation \a q.
 */
DisassociateAdminAccountResponsePrivate::DisassociateAdminAccountResponsePrivate(
    DisassociateAdminAccountResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * Parses a FMS DisassociateAdminAccount response element from \a xml.
 */
void DisassociateAdminAccountResponsePrivate::parseDisassociateAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAdminAccountResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
