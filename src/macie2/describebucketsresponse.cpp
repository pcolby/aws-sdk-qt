// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebucketsresponse.h"
#include "describebucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DescribeBucketsResponse
 * \brief The DescribeBucketsResponse class provides an interace for Macie2 DescribeBuckets responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::describeBuckets
 */

/*!
 * Constructs a DescribeBucketsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBucketsResponse::DescribeBucketsResponse(
        const DescribeBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DescribeBucketsResponsePrivate(this), parent)
{
    setRequest(new DescribeBucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBucketsRequest * DescribeBucketsResponse::request() const
{
    Q_D(const DescribeBucketsResponse);
    return static_cast<const DescribeBucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DescribeBuckets \a response.
 */
void DescribeBucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DescribeBucketsResponsePrivate
 * \brief The DescribeBucketsResponsePrivate class provides private implementation for DescribeBucketsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DescribeBucketsResponsePrivate object with public implementation \a q.
 */
DescribeBucketsResponsePrivate::DescribeBucketsResponsePrivate(
    DescribeBucketsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DescribeBuckets response element from \a xml.
 */
void DescribeBucketsResponsePrivate::parseDescribeBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
