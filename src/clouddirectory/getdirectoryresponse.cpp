/*
    Copyright 2013-2019 Paul Colby

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

#include "getdirectoryresponse.h"
#include "getdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetDirectoryResponse
 * \brief The GetDirectoryResponse class provides an interace for CloudDirectory GetDirectory responses.
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
 * \sa CloudDirectoryClient::getDirectory
 */

/*!
 * Constructs a GetDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetDirectoryResponse::GetDirectoryResponse(
        const GetDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetDirectoryResponsePrivate(this), parent)
{
    setRequest(new GetDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDirectoryRequest * GetDirectoryResponse::request() const
{
    Q_D(const GetDirectoryResponse);
    return static_cast<const GetDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetDirectory \a response.
 */
void GetDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetDirectoryResponsePrivate
 * \brief The GetDirectoryResponsePrivate class provides private implementation for GetDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetDirectoryResponsePrivate object with public implementation \a q.
 */
GetDirectoryResponsePrivate::GetDirectoryResponsePrivate(
    GetDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetDirectory response element from \a xml.
 */
void GetDirectoryResponsePrivate::parseGetDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
