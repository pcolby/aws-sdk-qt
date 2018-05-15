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

#include "enabledirectoryresponse.h"
#include "enabledirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::EnableDirectoryResponse
 * \brief The EnableDirectoryResponse class provides an interace for CloudDirectory EnableDirectory responses.
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
 * \sa CloudDirectoryClient::enableDirectory
 */

/*!
 * Constructs a EnableDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDirectoryResponse::EnableDirectoryResponse(
        const EnableDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new EnableDirectoryResponsePrivate(this), parent)
{
    setRequest(new EnableDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDirectoryRequest * EnableDirectoryResponse::request() const
{
    Q_D(const EnableDirectoryResponse);
    return static_cast<const EnableDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory EnableDirectory \a response.
 */
void EnableDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::EnableDirectoryResponsePrivate
 * \brief The EnableDirectoryResponsePrivate class provides private implementation for EnableDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a EnableDirectoryResponsePrivate object with public implementation \a q.
 */
EnableDirectoryResponsePrivate::EnableDirectoryResponsePrivate(
    EnableDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory EnableDirectory response element from \a xml.
 */
void EnableDirectoryResponsePrivate::parseEnableDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDirectoryResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
