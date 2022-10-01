// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfacetattributesresponse.h"
#include "listfacetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListFacetAttributesResponse
 * \brief The ListFacetAttributesResponse class provides an interace for CloudDirectory ListFacetAttributes responses.
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
 * \sa CloudDirectoryClient::listFacetAttributes
 */

/*!
 * Constructs a ListFacetAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ListFacetAttributesResponse::ListFacetAttributesResponse(
        const ListFacetAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListFacetAttributesResponsePrivate(this), parent)
{
    setRequest(new ListFacetAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFacetAttributesRequest * ListFacetAttributesResponse::request() const
{
    Q_D(const ListFacetAttributesResponse);
    return static_cast<const ListFacetAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListFacetAttributes \a response.
 */
void ListFacetAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFacetAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListFacetAttributesResponsePrivate
 * \brief The ListFacetAttributesResponsePrivate class provides private implementation for ListFacetAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListFacetAttributesResponsePrivate object with public implementation \a q.
 */
ListFacetAttributesResponsePrivate::ListFacetAttributesResponsePrivate(
    ListFacetAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListFacetAttributes response element from \a xml.
 */
void ListFacetAttributesResponsePrivate::parseListFacetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFacetAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
