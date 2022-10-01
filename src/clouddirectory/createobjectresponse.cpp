// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createobjectresponse.h"
#include "createobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateObjectResponse
 * \brief The CreateObjectResponse class provides an interace for CloudDirectory CreateObject responses.
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
 * \sa CloudDirectoryClient::createObject
 */

/*!
 * Constructs a CreateObjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateObjectResponse::CreateObjectResponse(
        const CreateObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateObjectResponsePrivate(this), parent)
{
    setRequest(new CreateObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateObjectRequest * CreateObjectResponse::request() const
{
    Q_D(const CreateObjectResponse);
    return static_cast<const CreateObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateObject \a response.
 */
void CreateObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateObjectResponsePrivate
 * \brief The CreateObjectResponsePrivate class provides private implementation for CreateObjectResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateObjectResponsePrivate object with public implementation \a q.
 */
CreateObjectResponsePrivate::CreateObjectResponsePrivate(
    CreateObjectResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateObject response element from \a xml.
 */
void CreateObjectResponsePrivate::parseCreateObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
