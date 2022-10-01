// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectparentsresponse.h"
#include "listobjectparentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentsResponse
 * \brief The ListObjectParentsResponse class provides an interace for CloudDirectory ListObjectParents responses.
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
 * \sa CloudDirectoryClient::listObjectParents
 */

/*!
 * Constructs a ListObjectParentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectParentsResponse::ListObjectParentsResponse(
        const ListObjectParentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectParentsResponsePrivate(this), parent)
{
    setRequest(new ListObjectParentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectParentsRequest * ListObjectParentsResponse::request() const
{
    Q_D(const ListObjectParentsResponse);
    return static_cast<const ListObjectParentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListObjectParents \a response.
 */
void ListObjectParentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectParentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListObjectParentsResponsePrivate
 * \brief The ListObjectParentsResponsePrivate class provides private implementation for ListObjectParentsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectParentsResponsePrivate object with public implementation \a q.
 */
ListObjectParentsResponsePrivate::ListObjectParentsResponsePrivate(
    ListObjectParentsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListObjectParents response element from \a xml.
 */
void ListObjectParentsResponsePrivate::parseListObjectParentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectParentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
