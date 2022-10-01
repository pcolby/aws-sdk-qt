// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventselectorsresponse.h"
#include "puteventselectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::PutEventSelectorsResponse
 * \brief The PutEventSelectorsResponse class provides an interace for CloudTrail PutEventSelectors responses.
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
 * \sa CloudTrailClient::putEventSelectors
 */

/*!
 * Constructs a PutEventSelectorsResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventSelectorsResponse::PutEventSelectorsResponse(
        const PutEventSelectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new PutEventSelectorsResponsePrivate(this), parent)
{
    setRequest(new PutEventSelectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventSelectorsRequest * PutEventSelectorsResponse::request() const
{
    Q_D(const PutEventSelectorsResponse);
    return static_cast<const PutEventSelectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail PutEventSelectors \a response.
 */
void PutEventSelectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventSelectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::PutEventSelectorsResponsePrivate
 * \brief The PutEventSelectorsResponsePrivate class provides private implementation for PutEventSelectorsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a PutEventSelectorsResponsePrivate object with public implementation \a q.
 */
PutEventSelectorsResponsePrivate::PutEventSelectorsResponsePrivate(
    PutEventSelectorsResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail PutEventSelectors response element from \a xml.
 */
void PutEventSelectorsResponsePrivate::parsePutEventSelectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventSelectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
