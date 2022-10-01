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

#include "createeventdatastoreresponse.h"
#include "createeventdatastoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CreateEventDataStoreResponse
 * \brief The CreateEventDataStoreResponse class provides an interace for CloudTrail CreateEventDataStore responses.
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
 * \sa CloudTrailClient::createEventDataStore
 */

/*!
 * Constructs a CreateEventDataStoreResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventDataStoreResponse::CreateEventDataStoreResponse(
        const CreateEventDataStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new CreateEventDataStoreResponsePrivate(this), parent)
{
    setRequest(new CreateEventDataStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventDataStoreRequest * CreateEventDataStoreResponse::request() const
{
    Q_D(const CreateEventDataStoreResponse);
    return static_cast<const CreateEventDataStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail CreateEventDataStore \a response.
 */
void CreateEventDataStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventDataStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::CreateEventDataStoreResponsePrivate
 * \brief The CreateEventDataStoreResponsePrivate class provides private implementation for CreateEventDataStoreResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CreateEventDataStoreResponsePrivate object with public implementation \a q.
 */
CreateEventDataStoreResponsePrivate::CreateEventDataStoreResponsePrivate(
    CreateEventDataStoreResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail CreateEventDataStore response element from \a xml.
 */
void CreateEventDataStoreResponsePrivate::parseCreateEventDataStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventDataStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
