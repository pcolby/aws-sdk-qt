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

#include "listtypedlinkfacetnamesresponse.h"
#include "listtypedlinkfacetnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetNamesResponse
 * \brief The ListTypedLinkFacetNamesResponse class provides an interace for CloudDirectory ListTypedLinkFacetNames responses.
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
 * \sa CloudDirectoryClient::listTypedLinkFacetNames
 */

/*!
 * Constructs a ListTypedLinkFacetNamesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTypedLinkFacetNamesResponse::ListTypedLinkFacetNamesResponse(
        const ListTypedLinkFacetNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListTypedLinkFacetNamesResponsePrivate(this), parent)
{
    setRequest(new ListTypedLinkFacetNamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTypedLinkFacetNamesRequest * ListTypedLinkFacetNamesResponse::request() const
{
    Q_D(const ListTypedLinkFacetNamesResponse);
    return static_cast<const ListTypedLinkFacetNamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListTypedLinkFacetNames \a response.
 */
void ListTypedLinkFacetNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTypedLinkFacetNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetNamesResponsePrivate
 * \brief The ListTypedLinkFacetNamesResponsePrivate class provides private implementation for ListTypedLinkFacetNamesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListTypedLinkFacetNamesResponsePrivate object with public implementation \a q.
 */
ListTypedLinkFacetNamesResponsePrivate::ListTypedLinkFacetNamesResponsePrivate(
    ListTypedLinkFacetNamesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListTypedLinkFacetNames response element from \a xml.
 */
void ListTypedLinkFacetNamesResponsePrivate::parseListTypedLinkFacetNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypedLinkFacetNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
