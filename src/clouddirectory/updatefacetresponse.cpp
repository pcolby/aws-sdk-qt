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

#include "updatefacetresponse.h"
#include "updatefacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateFacetResponse
 * \brief The UpdateFacetResponse class provides an interace for CloudDirectory UpdateFacet responses.
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
 * \sa CloudDirectoryClient::updateFacet
 */

/*!
 * Constructs a UpdateFacetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFacetResponse::UpdateFacetResponse(
        const UpdateFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateFacetResponsePrivate(this), parent)
{
    setRequest(new UpdateFacetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFacetRequest * UpdateFacetResponse::request() const
{
    Q_D(const UpdateFacetResponse);
    return static_cast<const UpdateFacetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory UpdateFacet \a response.
 */
void UpdateFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::UpdateFacetResponsePrivate
 * \brief The UpdateFacetResponsePrivate class provides private implementation for UpdateFacetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateFacetResponsePrivate object with public implementation \a q.
 */
UpdateFacetResponsePrivate::UpdateFacetResponsePrivate(
    UpdateFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory UpdateFacet response element from \a xml.
 */
void UpdateFacetResponsePrivate::parseUpdateFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
