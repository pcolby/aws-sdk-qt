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

#include "getlinkattributesresponse.h"
#include "getlinkattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesResponse
 * \brief The GetLinkAttributesResponse class provides an interace for CloudDirectory GetLinkAttributes responses.
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
 * \sa CloudDirectoryClient::getLinkAttributes
 */

/*!
 * Constructs a GetLinkAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinkAttributesResponse::GetLinkAttributesResponse(
        const GetLinkAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetLinkAttributesResponsePrivate(this), parent)
{
    setRequest(new GetLinkAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinkAttributesRequest * GetLinkAttributesResponse::request() const
{
    Q_D(const GetLinkAttributesResponse);
    return static_cast<const GetLinkAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetLinkAttributes \a response.
 */
void GetLinkAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinkAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesResponsePrivate
 * \brief The GetLinkAttributesResponsePrivate class provides private implementation for GetLinkAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetLinkAttributesResponsePrivate object with public implementation \a q.
 */
GetLinkAttributesResponsePrivate::GetLinkAttributesResponsePrivate(
    GetLinkAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetLinkAttributes response element from \a xml.
 */
void GetLinkAttributesResponsePrivate::parseGetLinkAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinkAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
