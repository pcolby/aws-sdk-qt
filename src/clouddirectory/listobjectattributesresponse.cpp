/*
    Copyright 2013-2018 Paul Colby

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

#include "listobjectattributesresponse.h"
#include "listobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectAttributesResponse
 * \brief The ListObjectAttributesResponse class provides an interace for CloudDirectory ListObjectAttributes responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listObjectAttributes
 */

/*!
 * Constructs a ListObjectAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectAttributesResponse::ListObjectAttributesResponse(
        const ListObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new ListObjectAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectAttributesRequest * ListObjectAttributesResponse::request() const
{
    Q_D(const ListObjectAttributesResponse);
    return static_cast<const ListObjectAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListObjectAttributes \a response.
 */
void ListObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListObjectAttributesResponsePrivate
 * \brief The ListObjectAttributesResponsePrivate class provides private implementation for ListObjectAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectAttributesResponsePrivate object with public implementation \a q.
 */
ListObjectAttributesResponsePrivate::ListObjectAttributesResponsePrivate(
    ListObjectAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListObjectAttributes response element from \a xml.
 */
void ListObjectAttributesResponsePrivate::parseListObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
