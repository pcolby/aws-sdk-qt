// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetypedlinkfacetresponse.h"
#include "updatetypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetResponse
 * \brief The UpdateTypedLinkFacetResponse class provides an interace for CloudDirectory UpdateTypedLinkFacet responses.
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
 * \sa CloudDirectoryClient::updateTypedLinkFacet
 */

/*!
 * Constructs a UpdateTypedLinkFacetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTypedLinkFacetResponse::UpdateTypedLinkFacetResponse(
        const UpdateTypedLinkFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new UpdateTypedLinkFacetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTypedLinkFacetRequest * UpdateTypedLinkFacetResponse::request() const
{
    Q_D(const UpdateTypedLinkFacetResponse);
    return static_cast<const UpdateTypedLinkFacetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory UpdateTypedLinkFacet \a response.
 */
void UpdateTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTypedLinkFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetResponsePrivate
 * \brief The UpdateTypedLinkFacetResponsePrivate class provides private implementation for UpdateTypedLinkFacetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateTypedLinkFacetResponsePrivate object with public implementation \a q.
 */
UpdateTypedLinkFacetResponsePrivate::UpdateTypedLinkFacetResponsePrivate(
    UpdateTypedLinkFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory UpdateTypedLinkFacet response element from \a xml.
 */
void UpdateTypedLinkFacetResponsePrivate::parseUpdateTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTypedLinkFacetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
