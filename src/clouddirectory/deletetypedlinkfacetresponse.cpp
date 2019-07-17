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

#include "deletetypedlinkfacetresponse.h"
#include "deletetypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteTypedLinkFacetResponse
 * \brief The DeleteTypedLinkFacetResponse class provides an interace for CloudDirectory DeleteTypedLinkFacet responses.
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
 * \sa CloudDirectoryClient::deleteTypedLinkFacet
 */

/*!
 * Constructs a DeleteTypedLinkFacetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTypedLinkFacetResponse::DeleteTypedLinkFacetResponse(
        const DeleteTypedLinkFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new DeleteTypedLinkFacetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTypedLinkFacetRequest * DeleteTypedLinkFacetResponse::request() const
{
    Q_D(const DeleteTypedLinkFacetResponse);
    return static_cast<const DeleteTypedLinkFacetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DeleteTypedLinkFacet \a response.
 */
void DeleteTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTypedLinkFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DeleteTypedLinkFacetResponsePrivate
 * \brief The DeleteTypedLinkFacetResponsePrivate class provides private implementation for DeleteTypedLinkFacetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteTypedLinkFacetResponsePrivate object with public implementation \a q.
 */
DeleteTypedLinkFacetResponsePrivate::DeleteTypedLinkFacetResponsePrivate(
    DeleteTypedLinkFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DeleteTypedLinkFacet response element from \a xml.
 */
void DeleteTypedLinkFacetResponsePrivate::parseDeleteTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTypedLinkFacetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
