/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listimportfailuresresponse.h"
#include "listimportfailuresresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::ListImportFailuresResponse
 * \brief The ListImportFailuresResponse class provides an interace for CloudTrail ListImportFailures responses.
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
 * \sa CloudTrailClient::listImportFailures
 */

/*!
 * Constructs a ListImportFailuresResponse object for \a reply to \a request, with parent \a parent.
 */
ListImportFailuresResponse::ListImportFailuresResponse(
        const ListImportFailuresRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new ListImportFailuresResponsePrivate(this), parent)
{
    setRequest(new ListImportFailuresRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImportFailuresRequest * ListImportFailuresResponse::request() const
{
    Q_D(const ListImportFailuresResponse);
    return static_cast<const ListImportFailuresRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail ListImportFailures \a response.
 */
void ListImportFailuresResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImportFailuresResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::ListImportFailuresResponsePrivate
 * \brief The ListImportFailuresResponsePrivate class provides private implementation for ListImportFailuresResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a ListImportFailuresResponsePrivate object with public implementation \a q.
 */
ListImportFailuresResponsePrivate::ListImportFailuresResponsePrivate(
    ListImportFailuresResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail ListImportFailures response element from \a xml.
 */
void ListImportFailuresResponsePrivate::parseListImportFailuresResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImportFailuresResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
