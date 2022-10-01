// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrunresponse.h"
#include "getjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::GetJobRunResponse
 * \brief The GetJobRunResponse class provides an interace for EmrServerless GetJobRun responses.
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
 * \sa EmrServerlessClient::getJobRun
 */

/*!
 * Constructs a GetJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobRunResponse::GetJobRunResponse(
        const GetJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrServerlessResponse(new GetJobRunResponsePrivate(this), parent)
{
    setRequest(new GetJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRunRequest * GetJobRunResponse::request() const
{
    Q_D(const GetJobRunResponse);
    return static_cast<const GetJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EmrServerless GetJobRun \a response.
 */
void GetJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EmrServerless::GetJobRunResponsePrivate
 * \brief The GetJobRunResponsePrivate class provides private implementation for GetJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a GetJobRunResponsePrivate object with public implementation \a q.
 */
GetJobRunResponsePrivate::GetJobRunResponsePrivate(
    GetJobRunResponse * const q) : EmrServerlessResponsePrivate(q)
{

}

/*!
 * Parses a EmrServerless GetJobRun response element from \a xml.
 */
void GetJobRunResponsePrivate::parseGetJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EmrServerless
} // namespace QtAws
