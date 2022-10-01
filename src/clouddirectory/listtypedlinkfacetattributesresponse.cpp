// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypedlinkfacetattributesresponse.h"
#include "listtypedlinkfacetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetAttributesResponse
 * \brief The ListTypedLinkFacetAttributesResponse class provides an interace for CloudDirectory ListTypedLinkFacetAttributes responses.
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
 * \sa CloudDirectoryClient::listTypedLinkFacetAttributes
 */

/*!
 * Constructs a ListTypedLinkFacetAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTypedLinkFacetAttributesResponse::ListTypedLinkFacetAttributesResponse(
        const ListTypedLinkFacetAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListTypedLinkFacetAttributesResponsePrivate(this), parent)
{
    setRequest(new ListTypedLinkFacetAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTypedLinkFacetAttributesRequest * ListTypedLinkFacetAttributesResponse::request() const
{
    Q_D(const ListTypedLinkFacetAttributesResponse);
    return static_cast<const ListTypedLinkFacetAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListTypedLinkFacetAttributes \a response.
 */
void ListTypedLinkFacetAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTypedLinkFacetAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetAttributesResponsePrivate
 * \brief The ListTypedLinkFacetAttributesResponsePrivate class provides private implementation for ListTypedLinkFacetAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListTypedLinkFacetAttributesResponsePrivate object with public implementation \a q.
 */
ListTypedLinkFacetAttributesResponsePrivate::ListTypedLinkFacetAttributesResponsePrivate(
    ListTypedLinkFacetAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListTypedLinkFacetAttributes response element from \a xml.
 */
void ListTypedLinkFacetAttributesResponsePrivate::parseListTypedLinkFacetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypedLinkFacetAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
