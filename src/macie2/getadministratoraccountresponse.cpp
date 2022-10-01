// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getadministratoraccountresponse.h"
#include "getadministratoraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetAdministratorAccountResponse
 * \brief The GetAdministratorAccountResponse class provides an interace for Macie2 GetAdministratorAccount responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getAdministratorAccount
 */

/*!
 * Constructs a GetAdministratorAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetAdministratorAccountResponse::GetAdministratorAccountResponse(
        const GetAdministratorAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetAdministratorAccountResponsePrivate(this), parent)
{
    setRequest(new GetAdministratorAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAdministratorAccountRequest * GetAdministratorAccountResponse::request() const
{
    Q_D(const GetAdministratorAccountResponse);
    return static_cast<const GetAdministratorAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetAdministratorAccount \a response.
 */
void GetAdministratorAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAdministratorAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetAdministratorAccountResponsePrivate
 * \brief The GetAdministratorAccountResponsePrivate class provides private implementation for GetAdministratorAccountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetAdministratorAccountResponsePrivate object with public implementation \a q.
 */
GetAdministratorAccountResponsePrivate::GetAdministratorAccountResponsePrivate(
    GetAdministratorAccountResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetAdministratorAccount response element from \a xml.
 */
void GetAdministratorAccountResponsePrivate::parseGetAdministratorAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdministratorAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
