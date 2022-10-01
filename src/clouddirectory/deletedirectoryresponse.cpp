// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectoryresponse.h"
#include "deletedirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteDirectoryResponse
 * \brief The DeleteDirectoryResponse class provides an interace for CloudDirectory DeleteDirectory responses.
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
 * \sa CloudDirectoryClient::deleteDirectory
 */

/*!
 * Constructs a DeleteDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDirectoryResponse::DeleteDirectoryResponse(
        const DeleteDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteDirectoryResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDirectoryRequest * DeleteDirectoryResponse::request() const
{
    Q_D(const DeleteDirectoryResponse);
    return static_cast<const DeleteDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DeleteDirectory \a response.
 */
void DeleteDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DeleteDirectoryResponsePrivate
 * \brief The DeleteDirectoryResponsePrivate class provides private implementation for DeleteDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteDirectoryResponsePrivate object with public implementation \a q.
 */
DeleteDirectoryResponsePrivate::DeleteDirectoryResponsePrivate(
    DeleteDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DeleteDirectory response element from \a xml.
 */
void DeleteDirectoryResponsePrivate::parseDeleteDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
