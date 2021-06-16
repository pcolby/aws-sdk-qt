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

#include "getobjectinformationresponse.h"
#include "getobjectinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationResponse
 * \brief The GetObjectInformationResponse class provides an interace for CloudDirectory GetObjectInformation responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::getObjectInformation
 */

/*!
 * Constructs a GetObjectInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectInformationResponse::GetObjectInformationResponse(
        const GetObjectInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetObjectInformationResponsePrivate(this), parent)
{
    setRequest(new GetObjectInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectInformationRequest * GetObjectInformationResponse::request() const
{
    Q_D(const GetObjectInformationResponse);
    return static_cast<const GetObjectInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetObjectInformation \a response.
 */
void GetObjectInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationResponsePrivate
 * \brief The GetObjectInformationResponsePrivate class provides private implementation for GetObjectInformationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetObjectInformationResponsePrivate object with public implementation \a q.
 */
GetObjectInformationResponsePrivate::GetObjectInformationResponsePrivate(
    GetObjectInformationResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetObjectInformation response element from \a xml.
 */
void GetObjectInformationResponsePrivate::parseGetObjectInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
