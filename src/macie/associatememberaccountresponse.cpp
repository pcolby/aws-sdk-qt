// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
