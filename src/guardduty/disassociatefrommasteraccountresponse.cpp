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

#include "disassociatefrommasteraccountresponse.h"
#include "disassociatefrommasteraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DisassociateFromMasterAccountResponse
 * \brief The DisassociateFromMasterAccountResponse class provides an interace for GuardDuty DisassociateFromMasterAccount responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::disassociateFromMasterAccount
 */

/*!
 * Constructs a DisassociateFromMasterAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFromMasterAccountResponse::DisassociateFromMasterAccountResponse(
        const DisassociateFromMasterAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DisassociateFromMasterAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateFromMasterAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateFromMasterAccountRequest * DisassociateFromMasterAccountResponse::request() const
{
    Q_D(const DisassociateFromMasterAccountResponse);
    return static_cast<const DisassociateFromMasterAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty DisassociateFromMasterAccount \a response.
 */
void DisassociateFromMasterAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateFromMasterAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DisassociateFromMasterAccountResponsePrivate
 * \brief The DisassociateFromMasterAccountResponsePrivate class provides private implementation for DisassociateFromMasterAccountResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DisassociateFromMasterAccountResponsePrivate object with public implementation \a q.
 */
DisassociateFromMasterAccountResponsePrivate::DisassociateFromMasterAccountResponsePrivate(
    DisassociateFromMasterAccountResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DisassociateFromMasterAccount response element from \a xml.
 */
void DisassociateFromMasterAccountResponsePrivate::parseDisassociateFromMasterAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFromMasterAccountResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
