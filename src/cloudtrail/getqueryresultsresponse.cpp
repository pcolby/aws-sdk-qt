// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getqueryresultsresponse.h"
#include "getqueryresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::GetQueryResultsResponse
 * \brief The GetQueryResultsResponse class provides an interace for CloudTrail GetQueryResults responses.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records Amazon Web Services API calls for your Amazon Web Services account and delivers
 *  log files to an Amazon S3 bucket. The recorded information includes the identity of the user, the start time of the
 *  Amazon Web Services API call, the source IP address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the Amazon Web Services SDKs, which consist of libraries and sample
 *  code for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide
 *  programmatic access to CloudTrail. For example, the SDKs handle cryptographically signing requests, managing errors, and
 *  retrying requests automatically. For more information about the Amazon Web Services SDKs, including how to download and
 *  install them, see <a href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail User
 *  Guide</a> for information about the data that is included with each Amazon Web Services API call listed in the log
 *
 * \sa CloudTrailClient::getQueryResults
 */

/*!
 * Constructs a GetQueryResultsResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryResultsResponse::GetQueryResultsResponse(
        const GetQueryResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new GetQueryResultsResponsePrivate(this), parent)
{
    setRequest(new GetQueryResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryResultsRequest * GetQueryResultsResponse::request() const
{
    Q_D(const GetQueryResultsResponse);
    return static_cast<const GetQueryResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail GetQueryResults \a response.
 */
void GetQueryResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::GetQueryResultsResponsePrivate
 * \brief The GetQueryResultsResponsePrivate class provides private implementation for GetQueryResultsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a GetQueryResultsResponsePrivate object with public implementation \a q.
 */
GetQueryResultsResponsePrivate::GetQueryResultsResponsePrivate(
    GetQueryResultsResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail GetQueryResults response element from \a xml.
 */
void GetQueryResultsResponsePrivate::parseGetQueryResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
