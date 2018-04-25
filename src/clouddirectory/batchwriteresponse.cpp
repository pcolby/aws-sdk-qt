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

#include "batchwriteresponse.h"
#include "batchwriteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::BatchWriteResponse
 * \brief The BatchWriteResponse class provides an interace for CloudDirectory BatchWrite responses.
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
 * \sa CloudDirectoryClient::batchWrite
 */

/*!
 * Constructs a BatchWriteResponse object for \a reply to \a request, with parent \a parent.
 */
BatchWriteResponse::BatchWriteResponse(
        const BatchWriteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new BatchWriteResponsePrivate(this), parent)
{
    setRequest(new BatchWriteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchWriteRequest * BatchWriteResponse::request() const
{
    Q_D(const BatchWriteResponse);
    return static_cast<const BatchWriteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory BatchWrite \a response.
 */
void BatchWriteResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchWriteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::BatchWriteResponsePrivate
 * \brief The BatchWriteResponsePrivate class provides private implementation for BatchWriteResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a BatchWriteResponsePrivate object with public implementation \a q.
 */
BatchWriteResponsePrivate::BatchWriteResponsePrivate(
    BatchWriteResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory BatchWrite response element from \a xml.
 */
void BatchWriteResponsePrivate::parseBatchWriteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchWriteResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
