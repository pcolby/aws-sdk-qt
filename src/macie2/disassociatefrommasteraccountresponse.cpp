// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefrommasteraccountresponse.h"
#include "disassociatefrommasteraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisassociateFromMasterAccountResponse
 * \brief The DisassociateFromMasterAccountResponse class provides an interace for Macie2 DisassociateFromMasterAccount responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disassociateFromMasterAccount
 */

/*!
 * Constructs a DisassociateFromMasterAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFromMasterAccountResponse::DisassociateFromMasterAccountResponse(
        const DisassociateFromMasterAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DisassociateFromMasterAccountResponsePrivate(this), parent)
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
 * Parses a successful Macie2 DisassociateFromMasterAccount \a response.
 */
void DisassociateFromMasterAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateFromMasterAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DisassociateFromMasterAccountResponsePrivate
 * \brief The DisassociateFromMasterAccountResponsePrivate class provides private implementation for DisassociateFromMasterAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisassociateFromMasterAccountResponsePrivate object with public implementation \a q.
 */
DisassociateFromMasterAccountResponsePrivate::DisassociateFromMasterAccountResponsePrivate(
    DisassociateFromMasterAccountResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DisassociateFromMasterAccount response element from \a xml.
 */
void DisassociateFromMasterAccountResponsePrivate::parseDisassociateFromMasterAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFromMasterAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
