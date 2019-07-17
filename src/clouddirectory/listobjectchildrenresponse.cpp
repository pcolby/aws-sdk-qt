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

#include "listobjectchildrenresponse.h"
#include "listobjectchildrenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectChildrenResponse
 * \brief The ListObjectChildrenResponse class provides an interace for CloudDirectory ListObjectChildren responses.
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
 * \sa CloudDirectoryClient::listObjectChildren
 */

/*!
 * Constructs a ListObjectChildrenResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectChildrenResponse::ListObjectChildrenResponse(
        const ListObjectChildrenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectChildrenResponsePrivate(this), parent)
{
    setRequest(new ListObjectChildrenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectChildrenRequest * ListObjectChildrenResponse::request() const
{
    Q_D(const ListObjectChildrenResponse);
    return static_cast<const ListObjectChildrenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListObjectChildren \a response.
 */
void ListObjectChildrenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectChildrenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListObjectChildrenResponsePrivate
 * \brief The ListObjectChildrenResponsePrivate class provides private implementation for ListObjectChildrenResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectChildrenResponsePrivate object with public implementation \a q.
 */
ListObjectChildrenResponsePrivate::ListObjectChildrenResponsePrivate(
    ListObjectChildrenResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListObjectChildren response element from \a xml.
 */
void ListObjectChildrenResponsePrivate::parseListObjectChildrenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectChildrenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
