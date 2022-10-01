// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachtypedlinkresponse.h"
#include "attachtypedlinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachTypedLinkResponse
 * \brief The AttachTypedLinkResponse class provides an interace for CloudDirectory AttachTypedLink responses.
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
 * \sa CloudDirectoryClient::attachTypedLink
 */

/*!
 * Constructs a AttachTypedLinkResponse object for \a reply to \a request, with parent \a parent.
 */
AttachTypedLinkResponse::AttachTypedLinkResponse(
        const AttachTypedLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachTypedLinkResponsePrivate(this), parent)
{
    setRequest(new AttachTypedLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachTypedLinkRequest * AttachTypedLinkResponse::request() const
{
    Q_D(const AttachTypedLinkResponse);
    return static_cast<const AttachTypedLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory AttachTypedLink \a response.
 */
void AttachTypedLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachTypedLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::AttachTypedLinkResponsePrivate
 * \brief The AttachTypedLinkResponsePrivate class provides private implementation for AttachTypedLinkResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachTypedLinkResponsePrivate object with public implementation \a q.
 */
AttachTypedLinkResponsePrivate::AttachTypedLinkResponsePrivate(
    AttachTypedLinkResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory AttachTypedLink response element from \a xml.
 */
void AttachTypedLinkResponsePrivate::parseAttachTypedLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachTypedLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
