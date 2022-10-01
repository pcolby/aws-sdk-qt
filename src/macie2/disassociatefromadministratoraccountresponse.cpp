// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefromadministratoraccountresponse.h"
#include "disassociatefromadministratoraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisassociateFromAdministratorAccountResponse
 * \brief The DisassociateFromAdministratorAccountResponse class provides an interace for Macie2 DisassociateFromAdministratorAccount responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disassociateFromAdministratorAccount
 */

/*!
 * Constructs a DisassociateFromAdministratorAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFromAdministratorAccountResponse::DisassociateFromAdministratorAccountResponse(
        const DisassociateFromAdministratorAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DisassociateFromAdministratorAccountResponsePrivate(this), parent)
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
 * Parses a successful Macie2 DisassociateFromAdministratorAccount \a response.
 */
void DisassociateFromAdministratorAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateFromAdministratorAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DisassociateFromAdministratorAccountResponsePrivate
 * \brief The DisassociateFromAdministratorAccountResponsePrivate class provides private implementation for DisassociateFromAdministratorAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisassociateFromAdministratorAccountResponsePrivate object with public implementation \a q.
 */
DisassociateFromAdministratorAccountResponsePrivate::DisassociateFromAdministratorAccountResponsePrivate(
    DisassociateFromAdministratorAccountResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DisassociateFromAdministratorAccount response element from \a xml.
 */
void DisassociateFromAdministratorAccountResponsePrivate::parseDisassociateFromAdministratorAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFromAdministratorAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
