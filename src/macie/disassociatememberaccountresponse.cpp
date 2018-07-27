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

#include "disassociatememberaccountresponse.h"
#include "disassociatememberaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateMemberAccountResponse
 * \brief The DisassociateMemberAccountResponse class provides an interace for Macie DisassociateMemberAccount responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
 *
 * \sa MacieClient::disassociateMemberAccount
 */

/*!
 * Constructs a DisassociateMemberAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMemberAccountResponse::DisassociateMemberAccountResponse(
        const DisassociateMemberAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new DisassociateMemberAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateMemberAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMemberAccountRequest * DisassociateMemberAccountResponse::request() const
{
    Q_D(const DisassociateMemberAccountResponse);
    return static_cast<const DisassociateMemberAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie DisassociateMemberAccount \a response.
 */
void DisassociateMemberAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMemberAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::DisassociateMemberAccountResponsePrivate
 * \brief The DisassociateMemberAccountResponsePrivate class provides private implementation for DisassociateMemberAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateMemberAccountResponsePrivate object with public implementation \a q.
 */
DisassociateMemberAccountResponsePrivate::DisassociateMemberAccountResponsePrivate(
    DisassociateMemberAccountResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie DisassociateMemberAccount response element from \a xml.
 */
void DisassociateMemberAccountResponsePrivate::parseDisassociateMemberAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMemberAccountResponse"));
    /// @todo
}

} // namespace Macie
} // namespace QtAws
