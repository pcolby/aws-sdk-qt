// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdirectoryresponse.h"
#include "getdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetDirectoryResponse
 * \brief The GetDirectoryResponse class provides an interace for CloudDirectory GetDirectory responses.
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
 * \sa CloudDirectoryClient::getDirectory
 */

/*!
 * Constructs a GetDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetDirectoryResponse::GetDirectoryResponse(
        const GetDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetDirectoryResponsePrivate(this), parent)
{
    setRequest(new GetDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDirectoryRequest * GetDirectoryResponse::request() const
{
    Q_D(const GetDirectoryResponse);
    return static_cast<const GetDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetDirectory \a response.
 */
void GetDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetDirectoryResponsePrivate
 * \brief The GetDirectoryResponsePrivate class provides private implementation for GetDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetDirectoryResponsePrivate object with public implementation \a q.
 */
GetDirectoryResponsePrivate::GetDirectoryResponsePrivate(
    GetDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetDirectory response element from \a xml.
 */
void GetDirectoryResponsePrivate::parseGetDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
