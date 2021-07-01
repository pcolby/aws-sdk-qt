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

#include "listdirectoriesresponse.h"
#include "listdirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListDirectoriesResponse
 * \brief The ListDirectoriesResponse class provides an interace for CloudDirectory ListDirectories responses.
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
 * \sa CloudDirectoryClient::listDirectories
 */

/*!
 * Constructs a ListDirectoriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDirectoriesResponse::ListDirectoriesResponse(
        const ListDirectoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListDirectoriesResponsePrivate(this), parent)
{
    setRequest(new ListDirectoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDirectoriesRequest * ListDirectoriesResponse::request() const
{
    Q_D(const ListDirectoriesResponse);
    return static_cast<const ListDirectoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListDirectories \a response.
 */
void ListDirectoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDirectoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListDirectoriesResponsePrivate
 * \brief The ListDirectoriesResponsePrivate class provides private implementation for ListDirectoriesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListDirectoriesResponsePrivate object with public implementation \a q.
 */
ListDirectoriesResponsePrivate::ListDirectoriesResponsePrivate(
    ListDirectoriesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListDirectories response element from \a xml.
 */
void ListDirectoriesResponsePrivate::parseListDirectoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDirectoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
