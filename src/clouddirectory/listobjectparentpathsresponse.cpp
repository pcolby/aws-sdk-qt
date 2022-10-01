// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectparentpathsresponse.h"
#include "listobjectparentpathsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsResponse
 * \brief The ListObjectParentPathsResponse class provides an interace for CloudDirectory ListObjectParentPaths responses.
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
 * \sa CloudDirectoryClient::listObjectParentPaths
 */

/*!
 * Constructs a ListObjectParentPathsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectParentPathsResponse::ListObjectParentPathsResponse(
        const ListObjectParentPathsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectParentPathsResponsePrivate(this), parent)
{
    setRequest(new ListObjectParentPathsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectParentPathsRequest * ListObjectParentPathsResponse::request() const
{
    Q_D(const ListObjectParentPathsResponse);
    return static_cast<const ListObjectParentPathsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListObjectParentPaths \a response.
 */
void ListObjectParentPathsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectParentPathsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsResponsePrivate
 * \brief The ListObjectParentPathsResponsePrivate class provides private implementation for ListObjectParentPathsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectParentPathsResponsePrivate object with public implementation \a q.
 */
ListObjectParentPathsResponsePrivate::ListObjectParentPathsResponsePrivate(
    ListObjectParentPathsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListObjectParentPaths response element from \a xml.
 */
void ListObjectParentPathsResponsePrivate::parseListObjectParentPathsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectParentPathsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
