// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemaresponse.h"
#include "createschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateSchemaResponse
 * \brief The CreateSchemaResponse class provides an interace for CloudDirectory CreateSchema responses.
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
 * \sa CloudDirectoryClient::createSchema
 */

/*!
 * Constructs a CreateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSchemaResponse::CreateSchemaResponse(
        const CreateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateSchemaResponsePrivate(this), parent)
{
    setRequest(new CreateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSchemaRequest * CreateSchemaResponse::request() const
{
    Q_D(const CreateSchemaResponse);
    return static_cast<const CreateSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateSchema \a response.
 */
void CreateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateSchemaResponsePrivate
 * \brief The CreateSchemaResponsePrivate class provides private implementation for CreateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateSchemaResponsePrivate object with public implementation \a q.
 */
CreateSchemaResponsePrivate::CreateSchemaResponsePrivate(
    CreateSchemaResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateSchema response element from \a xml.
 */
void CreateSchemaResponsePrivate::parseCreateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
