// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtypedlinkfacetresponse.h"
#include "createtypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateTypedLinkFacetResponse
 * \brief The CreateTypedLinkFacetResponse class provides an interace for CloudDirectory CreateTypedLinkFacet responses.
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
 * \sa CloudDirectoryClient::createTypedLinkFacet
 */

/*!
 * Constructs a CreateTypedLinkFacetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTypedLinkFacetResponse::CreateTypedLinkFacetResponse(
        const CreateTypedLinkFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new CreateTypedLinkFacetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTypedLinkFacetRequest * CreateTypedLinkFacetResponse::request() const
{
    Q_D(const CreateTypedLinkFacetResponse);
    return static_cast<const CreateTypedLinkFacetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory CreateTypedLinkFacet \a response.
 */
void CreateTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTypedLinkFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::CreateTypedLinkFacetResponsePrivate
 * \brief The CreateTypedLinkFacetResponsePrivate class provides private implementation for CreateTypedLinkFacetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateTypedLinkFacetResponsePrivate object with public implementation \a q.
 */
CreateTypedLinkFacetResponsePrivate::CreateTypedLinkFacetResponsePrivate(
    CreateTypedLinkFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory CreateTypedLinkFacet response element from \a xml.
 */
void CreateTypedLinkFacetResponsePrivate::parseCreateTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTypedLinkFacetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
