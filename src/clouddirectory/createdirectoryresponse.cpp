// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectoryresponse.h"
#include "createdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateDirectoryResponse
 * \brief The CreateDirectoryResponse class provides an interace for CloudDirectory CreateDirectory responses.
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
 * \sa CloudDirectoryClient::createDirectory
 */

/*!
 * Constructs a CreateDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDirectoryResponse::CreateDirectoryResponse(
        const CreateDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateDirectoryResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDirectoryRequest * CreateDirectoryResponse::request() const
{
    Q_D(const CreateDirectoryResponse);
    return static_cast<const CreateDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateDirectory \a response.
 */
void CreateDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateDirectoryResponsePrivate
 * \brief The CreateDirectoryResponsePrivate class provides private implementation for CreateDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateDirectoryResponsePrivate object with public implementation \a q.
 */
CreateDirectoryResponsePrivate::CreateDirectoryResponsePrivate(
    CreateDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateDirectory response element from \a xml.
 */
void CreateDirectoryResponsePrivate::parseCreateDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
