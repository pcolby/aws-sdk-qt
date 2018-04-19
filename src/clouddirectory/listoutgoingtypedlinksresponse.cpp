/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
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
    Q_D(ListOutgoingTypedLinksResponse);
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
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
