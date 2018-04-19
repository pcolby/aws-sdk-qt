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

#include "attachobjectresponse.h"
#include "attachobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachObjectResponse
 * \brief The AttachObjectResponse class provides an interace for CloudDirectory AttachObject responses.
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
 * \sa CloudDirectoryClient::attachObject
 */

/*!
 * Constructs a AttachObjectResponse object for \a reply to \a request, with parent \a parent.
 */
AttachObjectResponse::AttachObjectResponse(
        const AttachObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachObjectResponsePrivate(this), parent)
{
    setRequest(new AttachObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachObjectRequest * AttachObjectResponse::request() const
{
    Q_D(const AttachObjectResponse);
    return static_cast<const AttachObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory AttachObject \a response.
 */
void AttachObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::AttachObjectResponsePrivate
 * \brief The AttachObjectResponsePrivate class provides private implementation for AttachObjectResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachObjectResponsePrivate object with public implementation \a q.
 */
AttachObjectResponsePrivate::AttachObjectResponsePrivate(
    AttachObjectResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory AttachObject response element from \a xml.
 */
void AttachObjectResponsePrivate::parseAttachObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
