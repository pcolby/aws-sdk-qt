// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableorganizationadminaccountresponse.h"
#include "enableorganizationadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::EnableOrganizationAdminAccountResponse
 * \brief The EnableOrganizationAdminAccountResponse class provides an interace for Macie2 EnableOrganizationAdminAccount responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::enableOrganizationAdminAccount
 */

/*!
 * Constructs a EnableOrganizationAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
EnableOrganizationAdminAccountResponse::EnableOrganizationAdminAccountResponse(
        const EnableOrganizationAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new EnableOrganizationAdminAccountResponsePrivate(this), parent)
{
    setRequest(new EnableOrganizationAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableOrganizationAdminAccountRequest * EnableOrganizationAdminAccountResponse::request() const
{
    Q_D(const EnableOrganizationAdminAccountResponse);
    return static_cast<const EnableOrganizationAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 EnableOrganizationAdminAccount \a response.
 */
void EnableOrganizationAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableOrganizationAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::EnableOrganizationAdminAccountResponsePrivate
 * \brief The EnableOrganizationAdminAccountResponsePrivate class provides private implementation for EnableOrganizationAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a EnableOrganizationAdminAccountResponsePrivate object with public implementation \a q.
 */
EnableOrganizationAdminAccountResponsePrivate::EnableOrganizationAdminAccountResponsePrivate(
    EnableOrganizationAdminAccountResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 EnableOrganizationAdminAccount response element from \a xml.
 */
void EnableOrganizationAdminAccountResponsePrivate::parseEnableOrganizationAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableOrganizationAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
