// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
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
