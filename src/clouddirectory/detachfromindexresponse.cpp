// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachfromindexresponse.h"
#include "detachfromindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DetachFromIndexResponse
 * \brief The DetachFromIndexResponse class provides an interace for CloudDirectory DetachFromIndex responses.
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
 * \sa CloudDirectoryClient::detachFromIndex
 */

/*!
 * Constructs a DetachFromIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DetachFromIndexResponse::DetachFromIndexResponse(
        const DetachFromIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachFromIndexResponsePrivate(this), parent)
{
    setRequest(new DetachFromIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachFromIndexRequest * DetachFromIndexResponse::request() const
{
    Q_D(const DetachFromIndexResponse);
    return static_cast<const DetachFromIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DetachFromIndex \a response.
 */
void DetachFromIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachFromIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DetachFromIndexResponsePrivate
 * \brief The DetachFromIndexResponsePrivate class provides private implementation for DetachFromIndexResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DetachFromIndexResponsePrivate object with public implementation \a q.
 */
DetachFromIndexResponsePrivate::DetachFromIndexResponsePrivate(
    DetachFromIndexResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DetachFromIndex response element from \a xml.
 */
void DetachFromIndexResponsePrivate::parseDetachFromIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachFromIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
