// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketstatisticsresponse.h"
#include "getbucketstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetBucketStatisticsResponse
 * \brief The GetBucketStatisticsResponse class provides an interace for Macie2 GetBucketStatistics responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getBucketStatistics
 */

/*!
 * Constructs a GetBucketStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketStatisticsResponse::GetBucketStatisticsResponse(
        const GetBucketStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetBucketStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetBucketStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketStatisticsRequest * GetBucketStatisticsResponse::request() const
{
    Q_D(const GetBucketStatisticsResponse);
    return static_cast<const GetBucketStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetBucketStatistics \a response.
 */
void GetBucketStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetBucketStatisticsResponsePrivate
 * \brief The GetBucketStatisticsResponsePrivate class provides private implementation for GetBucketStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetBucketStatisticsResponsePrivate object with public implementation \a q.
 */
GetBucketStatisticsResponsePrivate::GetBucketStatisticsResponsePrivate(
    GetBucketStatisticsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetBucketStatistics response element from \a xml.
 */
void GetBucketStatisticsResponsePrivate::parseGetBucketStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
