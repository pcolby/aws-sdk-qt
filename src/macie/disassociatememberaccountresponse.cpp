// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
