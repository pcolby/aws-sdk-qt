// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfacetresponse.h"
#include "createfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateFacetResponse
 * \brief The CreateFacetResponse class provides an interace for CloudDirectory CreateFacet responses.
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
 * \sa CloudDirectoryClient::createFacet
 */

/*!
 * Constructs a CreateFacetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFacetResponse::CreateFacetResponse(
        const CreateFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateFacetResponsePrivate(this), parent)
{
    setRequest(new CreateFacetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFacetRequest * CreateFacetResponse::request() const
{
    Q_D(const CreateFacetResponse);
    return static_cast<const CreateFacetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateFacet \a response.
 */
void CreateFacetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateFacetResponsePrivate
 * \brief The CreateFacetResponsePrivate class provides private implementation for CreateFacetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateFacetResponsePrivate object with public implementation \a q.
 */
CreateFacetResponsePrivate::CreateFacetResponsePrivate(
    CreateFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateFacet response element from \a xml.
 */
void CreateFacetResponsePrivate::parseCreateFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFacetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
