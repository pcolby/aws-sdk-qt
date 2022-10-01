// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoutgoingtypedlinksresponse.h"
#include "listoutgoingtypedlinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListOutgoingTypedLinksResponse
 * \brief The ListOutgoingTypedLinksResponse class provides an interace for CloudDirectory ListOutgoingTypedLinks responses.
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
 * \sa CloudDirectoryClient::listOutgoingTypedLinks
 */

/*!
 * Constructs a ListOutgoingTypedLinksResponse object for \a reply to \a request, with parent \a parent.
 */
ListOutgoingTypedLinksResponse::ListOutgoingTypedLinksResponse(
        const ListOutgoingTypedLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListOutgoingTypedLinksResponsePrivate(this), parent)
{
    setRequest(new ListOutgoingTypedLinksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOutgoingTypedLinksRequest * ListOutgoingTypedLinksResponse::request() const
{
    Q_D(const ListOutgoingTypedLinksResponse);
    return static_cast<const ListOutgoingTypedLinksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListOutgoingTypedLinks \a response.
 */
void ListOutgoingTypedLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOutgoingTypedLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListOutgoingTypedLinksResponsePrivate
 * \brief The ListOutgoingTypedLinksResponsePrivate class provides private implementation for ListOutgoingTypedLinksResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListOutgoingTypedLinksResponsePrivate object with public implementation \a q.
 */
ListOutgoingTypedLinksResponsePrivate::ListOutgoingTypedLinksResponsePrivate(
    ListOutgoingTypedLinksResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListOutgoingTypedLinks response element from \a xml.
 */
void ListOutgoingTypedLinksResponsePrivate::parseListOutgoingTypedLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOutgoingTypedLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
