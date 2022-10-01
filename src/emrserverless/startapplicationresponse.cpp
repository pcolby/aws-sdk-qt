// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationresponse.h"
#include "startapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::StartApplicationResponse
 * \brief The StartApplicationResponse class provides an interace for EmrServerless StartApplication responses.
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
 * \sa EmrServerlessClient::startApplication
 */

/*!
 * Constructs a StartApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StartApplicationResponse::StartApplicationResponse(
        const StartApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrServerlessResponse(new StartApplicationResponsePrivate(this), parent)
{
    setRequest(new StartApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartApplicationRequest * StartApplicationResponse::request() const
{
    Q_D(const StartApplicationResponse);
    return static_cast<const StartApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EmrServerless StartApplication \a response.
 */
void StartApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EmrServerless::StartApplicationResponsePrivate
 * \brief The StartApplicationResponsePrivate class provides private implementation for StartApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a StartApplicationResponsePrivate object with public implementation \a q.
 */
StartApplicationResponsePrivate::StartApplicationResponsePrivate(
    StartApplicationResponse * const q) : EmrServerlessResponsePrivate(q)
{

}

/*!
 * Parses a EmrServerless StartApplication response element from \a xml.
 */
void StartApplicationResponsePrivate::parseStartApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EmrServerless
} // namespace QtAws
