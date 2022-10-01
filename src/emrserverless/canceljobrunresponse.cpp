// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrunresponse.h"
#include "canceljobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::CancelJobRunResponse
 * \brief The CancelJobRunResponse class provides an interace for EmrServerless CancelJobRun responses.
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
 * \sa EmrServerlessClient::cancelJobRun
 */

/*!
 * Constructs a CancelJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobRunResponse::CancelJobRunResponse(
        const CancelJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrServerlessResponse(new CancelJobRunResponsePrivate(this), parent)
{
    setRequest(new CancelJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobRunRequest * CancelJobRunResponse::request() const
{
    Q_D(const CancelJobRunResponse);
    return static_cast<const CancelJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EmrServerless CancelJobRun \a response.
 */
void CancelJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EmrServerless::CancelJobRunResponsePrivate
 * \brief The CancelJobRunResponsePrivate class provides private implementation for CancelJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a CancelJobRunResponsePrivate object with public implementation \a q.
 */
CancelJobRunResponsePrivate::CancelJobRunResponsePrivate(
    CancelJobRunResponse * const q) : EmrServerlessResponsePrivate(q)
{

}

/*!
 * Parses a EmrServerless CancelJobRun response element from \a xml.
 */
void CancelJobRunResponsePrivate::parseCancelJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EmrServerless
} // namespace QtAws
