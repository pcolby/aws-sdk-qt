// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclassificationjobsresponse.h"
#include "listclassificationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListClassificationJobsResponse
 * \brief The ListClassificationJobsResponse class provides an interace for Macie2 ListClassificationJobs responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listClassificationJobs
 */

/*!
 * Constructs a ListClassificationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListClassificationJobsResponse::ListClassificationJobsResponse(
        const ListClassificationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new ListClassificationJobsResponsePrivate(this), parent)
{
    setRequest(new ListClassificationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClassificationJobsRequest * ListClassificationJobsResponse::request() const
{
    Q_D(const ListClassificationJobsResponse);
    return static_cast<const ListClassificationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 ListClassificationJobs \a response.
 */
void ListClassificationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClassificationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::ListClassificationJobsResponsePrivate
 * \brief The ListClassificationJobsResponsePrivate class provides private implementation for ListClassificationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListClassificationJobsResponsePrivate object with public implementation \a q.
 */
ListClassificationJobsResponsePrivate::ListClassificationJobsResponsePrivate(
    ListClassificationJobsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 ListClassificationJobs response element from \a xml.
 */
void ListClassificationJobsResponsePrivate::parseListClassificationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClassificationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
