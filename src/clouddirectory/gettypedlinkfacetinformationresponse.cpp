// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettypedlinkfacetinformationresponse.h"
#include "gettypedlinkfacetinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationResponse
 * \brief The GetTypedLinkFacetInformationResponse class provides an interace for CloudDirectory GetTypedLinkFacetInformation responses.
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
 * \sa CloudDirectoryClient::getTypedLinkFacetInformation
 */

/*!
 * Constructs a GetTypedLinkFacetInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetTypedLinkFacetInformationResponse::GetTypedLinkFacetInformationResponse(
        const GetTypedLinkFacetInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetTypedLinkFacetInformationResponsePrivate(this), parent)
{
    setRequest(new GetTypedLinkFacetInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTypedLinkFacetInformationRequest * GetTypedLinkFacetInformationResponse::request() const
{
    Q_D(const GetTypedLinkFacetInformationResponse);
    return static_cast<const GetTypedLinkFacetInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetTypedLinkFacetInformation \a response.
 */
void GetTypedLinkFacetInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTypedLinkFacetInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationResponsePrivate
 * \brief The GetTypedLinkFacetInformationResponsePrivate class provides private implementation for GetTypedLinkFacetInformationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetTypedLinkFacetInformationResponsePrivate object with public implementation \a q.
 */
GetTypedLinkFacetInformationResponsePrivate::GetTypedLinkFacetInformationResponsePrivate(
    GetTypedLinkFacetInformationResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetTypedLinkFacetInformation response element from \a xml.
 */
void GetTypedLinkFacetInformationResponsePrivate::parseGetTypedLinkFacetInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypedLinkFacetInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
