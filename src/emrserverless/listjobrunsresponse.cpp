// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobrunsresponse.h"
#include "listjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::ListJobRunsResponse
 * \brief The ListJobRunsResponse class provides an interace for EmrServerless ListJobRuns responses.
 *
 * \inmodule QtAwsEmrServerless
 *
 *  Amazon EMR Serverless is a new deployment option for Amazon EMR. EMR Serverless provides a serverless runtime
 *  environment that simplifies running analytics applications using the latest open source frameworks such as Apache Spark
 *  and Apache Hive. With EMR Serverless, you don’t have to configure, optimize, secure, or operate clusters to run
 *  applications with these
 * 
 *  frameworks>
 * 
 *  The API reference to Amazon EMR Serverless is <code>emr-serverless</code>. The <code>emr-serverless</code> prefix is
 *  used in the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR Serverless. For example, <code>aws emr-serverless
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR Serverless. For example, <code>"Action":
 *  ["emr-serverless:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR
 * 
 *  Serverless</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR Serverless service endpoints. For example,
 *
 * \sa EmrServerlessClient::listJobRuns
 */

/*!
 * Constructs a ListJobRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobRunsResponse::ListJobRunsResponse(
        const ListJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrServerlessResponse(new ListJobRunsResponsePrivate(this), parent)
{
    setRequest(new ListJobRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobRunsRequest * ListJobRunsResponse::request() const
{
    Q_D(const ListJobRunsResponse);
    return static_cast<const ListJobRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EmrServerless ListJobRuns \a response.
 */
void ListJobRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EmrServerless::ListJobRunsResponsePrivate
 * \brief The ListJobRunsResponsePrivate class provides private implementation for ListJobRunsResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a ListJobRunsResponsePrivate object with public implementation \a q.
 */
ListJobRunsResponsePrivate::ListJobRunsResponsePrivate(
    ListJobRunsResponse * const q) : EmrServerlessResponsePrivate(q)
{

}

/*!
 * Parses a EmrServerless ListJobRuns response element from \a xml.
 */
void ListJobRunsResponsePrivate::parseListJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EmrServerless
} // namespace QtAws
