// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomdataidentifierresponse.h"
#include "getcustomdataidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetCustomDataIdentifierResponse
 * \brief The GetCustomDataIdentifierResponse class provides an interace for Macie2 GetCustomDataIdentifier responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getCustomDataIdentifier
 */

/*!
 * Constructs a GetCustomDataIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetCustomDataIdentifierResponse::GetCustomDataIdentifierResponse(
        const GetCustomDataIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetCustomDataIdentifierResponsePrivate(this), parent)
{
    setRequest(new GetCustomDataIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCustomDataIdentifierRequest * GetCustomDataIdentifierResponse::request() const
{
    Q_D(const GetCustomDataIdentifierResponse);
    return static_cast<const GetCustomDataIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetCustomDataIdentifier \a response.
 */
void GetCustomDataIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCustomDataIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetCustomDataIdentifierResponsePrivate
 * \brief The GetCustomDataIdentifierResponsePrivate class provides private implementation for GetCustomDataIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetCustomDataIdentifierResponsePrivate object with public implementation \a q.
 */
GetCustomDataIdentifierResponsePrivate::GetCustomDataIdentifierResponsePrivate(
    GetCustomDataIdentifierResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetCustomDataIdentifier response element from \a xml.
 */
void GetCustomDataIdentifierResponsePrivate::parseGetCustomDataIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomDataIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
