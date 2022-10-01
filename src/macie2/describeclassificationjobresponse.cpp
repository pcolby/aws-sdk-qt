// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclassificationjobresponse.h"
#include "describeclassificationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DescribeClassificationJobResponse
 * \brief The DescribeClassificationJobResponse class provides an interace for Macie2 DescribeClassificationJob responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::describeClassificationJob
 */

/*!
 * Constructs a DescribeClassificationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClassificationJobResponse::DescribeClassificationJobResponse(
        const DescribeClassificationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DescribeClassificationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeClassificationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClassificationJobRequest * DescribeClassificationJobResponse::request() const
{
    Q_D(const DescribeClassificationJobResponse);
    return static_cast<const DescribeClassificationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DescribeClassificationJob \a response.
 */
void DescribeClassificationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClassificationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DescribeClassificationJobResponsePrivate
 * \brief The DescribeClassificationJobResponsePrivate class provides private implementation for DescribeClassificationJobResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DescribeClassificationJobResponsePrivate object with public implementation \a q.
 */
DescribeClassificationJobResponsePrivate::DescribeClassificationJobResponsePrivate(
    DescribeClassificationJobResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DescribeClassificationJob response element from \a xml.
 */
void DescribeClassificationJobResponsePrivate::parseDescribeClassificationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClassificationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
