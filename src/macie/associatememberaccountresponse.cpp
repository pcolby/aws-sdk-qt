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

#include "associatememberaccountresponse.h"
#include "associatememberaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::AssociateMemberAccountResponse
 * \brief The AssociateMemberAccountResponse class provides an interace for Macie AssociateMemberAccount responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::associateMemberAccount
 */

/*!
 * Constructs a AssociateMemberAccountResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateMemberAccountResponse::AssociateMemberAccountResponse(
        const AssociateMemberAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new AssociateMemberAccountResponsePrivate(this), parent)
{
    setRequest(new AssociateMemberAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateMemberAccountRequest * AssociateMemberAccountResponse::request() const
{
    Q_D(const AssociateMemberAccountResponse);
    return static_cast<const AssociateMemberAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie AssociateMemberAccount \a response.
 */
void AssociateMemberAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateMemberAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::AssociateMemberAccountResponsePrivate
 * \brief The AssociateMemberAccountResponsePrivate class provides private implementation for AssociateMemberAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a AssociateMemberAccountResponsePrivate object with public implementation \a q.
 */
AssociateMemberAccountResponsePrivate::AssociateMemberAccountResponsePrivate(
    AssociateMemberAccountResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie AssociateMemberAccount response element from \a xml.
 */
void AssociateMemberAccountResponsePrivate::parseAssociateMemberAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateMemberAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
