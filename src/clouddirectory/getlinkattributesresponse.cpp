// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlinkattributesresponse.h"
#include "getlinkattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesResponse
 * \brief The GetLinkAttributesResponse class provides an interace for CloudDirectory GetLinkAttributes responses.
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
 * \sa CloudDirectoryClient::getLinkAttributes
 */

/*!
 * Constructs a GetLinkAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinkAttributesResponse::GetLinkAttributesResponse(
        const GetLinkAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetLinkAttributesResponsePrivate(this), parent)
{
    setRequest(new GetLinkAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinkAttributesRequest * GetLinkAttributesResponse::request() const
{
    Q_D(const GetLinkAttributesResponse);
    return static_cast<const GetLinkAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetLinkAttributes \a response.
 */
void GetLinkAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinkAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesResponsePrivate
 * \brief The GetLinkAttributesResponsePrivate class provides private implementation for GetLinkAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetLinkAttributesResponsePrivate object with public implementation \a q.
 */
GetLinkAttributesResponsePrivate::GetLinkAttributesResponsePrivate(
    GetLinkAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetLinkAttributes response element from \a xml.
 */
void GetLinkAttributesResponsePrivate::parseGetLinkAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinkAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
