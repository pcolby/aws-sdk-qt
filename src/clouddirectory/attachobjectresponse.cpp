// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachobjectresponse.h"
#include "attachobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachObjectResponse
 * \brief The AttachObjectResponse class provides an interace for CloudDirectory AttachObject responses.
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
 * \sa CloudDirectoryClient::attachObject
 */

/*!
 * Constructs a AttachObjectResponse object for \a reply to \a request, with parent \a parent.
 */
AttachObjectResponse::AttachObjectResponse(
        const AttachObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachObjectResponsePrivate(this), parent)
{
    setRequest(new AttachObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachObjectRequest * AttachObjectResponse::request() const
{
    Q_D(const AttachObjectResponse);
    return static_cast<const AttachObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory AttachObject \a response.
 */
void AttachObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::AttachObjectResponsePrivate
 * \brief The AttachObjectResponsePrivate class provides private implementation for AttachObjectResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachObjectResponsePrivate object with public implementation \a q.
 */
AttachObjectResponsePrivate::AttachObjectResponsePrivate(
    AttachObjectResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory AttachObject response element from \a xml.
 */
void AttachObjectResponsePrivate::parseAttachObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
