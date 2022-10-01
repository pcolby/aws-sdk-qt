// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateobjectattributesresponse.h"
#include "updateobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateObjectAttributesResponse
 * \brief The UpdateObjectAttributesResponse class provides an interace for CloudDirectory UpdateObjectAttributes responses.
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
 * \sa CloudDirectoryClient::updateObjectAttributes
 */

/*!
 * Constructs a UpdateObjectAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateObjectAttributesResponse::UpdateObjectAttributesResponse(
        const UpdateObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateObjectAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateObjectAttributesRequest * UpdateObjectAttributesResponse::request() const
{
    Q_D(const UpdateObjectAttributesResponse);
    return static_cast<const UpdateObjectAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory UpdateObjectAttributes \a response.
 */
void UpdateObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateObjectAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::UpdateObjectAttributesResponsePrivate
 * \brief The UpdateObjectAttributesResponsePrivate class provides private implementation for UpdateObjectAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateObjectAttributesResponsePrivate object with public implementation \a q.
 */
UpdateObjectAttributesResponsePrivate::UpdateObjectAttributesResponsePrivate(
    UpdateObjectAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory UpdateObjectAttributes response element from \a xml.
 */
void UpdateObjectAttributesResponsePrivate::parseUpdateObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateObjectAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
