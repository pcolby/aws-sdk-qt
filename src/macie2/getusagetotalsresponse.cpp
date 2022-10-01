// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusagetotalsresponse.h"
#include "getusagetotalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetUsageTotalsResponse
 * \brief The GetUsageTotalsResponse class provides an interace for Macie2 GetUsageTotals responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getUsageTotals
 */

/*!
 * Constructs a GetUsageTotalsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageTotalsResponse::GetUsageTotalsResponse(
        const GetUsageTotalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetUsageTotalsResponsePrivate(this), parent)
{
    setRequest(new GetUsageTotalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageTotalsRequest * GetUsageTotalsResponse::request() const
{
    Q_D(const GetUsageTotalsResponse);
    return static_cast<const GetUsageTotalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetUsageTotals \a response.
 */
void GetUsageTotalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageTotalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetUsageTotalsResponsePrivate
 * \brief The GetUsageTotalsResponsePrivate class provides private implementation for GetUsageTotalsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetUsageTotalsResponsePrivate object with public implementation \a q.
 */
GetUsageTotalsResponsePrivate::GetUsageTotalsResponsePrivate(
    GetUsageTotalsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetUsageTotals response element from \a xml.
 */
void GetUsageTotalsResponsePrivate::parseGetUsageTotalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageTotalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
