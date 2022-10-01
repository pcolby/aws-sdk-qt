// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createindexresponse.h"
#include "createindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateIndexResponse
 * \brief The CreateIndexResponse class provides an interace for CloudDirectory CreateIndex responses.
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
 * \sa CloudDirectoryClient::createIndex
 */

/*!
 * Constructs a CreateIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIndexResponse::CreateIndexResponse(
        const CreateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateIndexResponsePrivate(this), parent)
{
    setRequest(new CreateIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIndexRequest * CreateIndexResponse::request() const
{
    Q_D(const CreateIndexResponse);
    return static_cast<const CreateIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateIndex \a response.
 */
void CreateIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateIndexResponsePrivate
 * \brief The CreateIndexResponsePrivate class provides private implementation for CreateIndexResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateIndexResponsePrivate object with public implementation \a q.
 */
CreateIndexResponsePrivate::CreateIndexResponsePrivate(
    CreateIndexResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateIndex response element from \a xml.
 */
void CreateIndexResponsePrivate::parseCreateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
