// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
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
    //Q_D(BatchWriteResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
