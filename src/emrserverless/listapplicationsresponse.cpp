// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationsresponse.h"
#include "listapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::ListApplicationsResponse
 * \brief The ListApplicationsResponse class provides an interace for EmrServerless ListApplications responses.
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
 * \sa EmrServerlessClient::listApplications
 */

/*!
 * Constructs a ListApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationsResponse::ListApplicationsResponse(
        const ListApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrServerlessResponse(new ListApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationsRequest * ListApplicationsResponse::request() const
{
    Q_D(const ListApplicationsResponse);
    return static_cast<const ListApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EmrServerless ListApplications \a response.
 */
void ListApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EmrServerless::ListApplicationsResponsePrivate
 * \brief The ListApplicationsResponsePrivate class provides private implementation for ListApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a ListApplicationsResponsePrivate object with public implementation \a q.
 */
ListApplicationsResponsePrivate::ListApplicationsResponsePrivate(
    ListApplicationsResponse * const q) : EmrServerlessResponsePrivate(q)
{

}

/*!
 * Parses a EmrServerless ListApplications response element from \a xml.
 */
void ListApplicationsResponsePrivate::parseListApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EmrServerless
} // namespace QtAws
