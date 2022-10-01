// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaasjsonresponse.h"
#include "getschemaasjsonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetSchemaAsJsonResponse
 * \brief The GetSchemaAsJsonResponse class provides an interace for CloudDirectory GetSchemaAsJson responses.
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
 * \sa CloudDirectoryClient::getSchemaAsJson
 */

/*!
 * Constructs a GetSchemaAsJsonResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaAsJsonResponse::GetSchemaAsJsonResponse(
        const GetSchemaAsJsonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetSchemaAsJsonResponsePrivate(this), parent)
{
    setRequest(new GetSchemaAsJsonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaAsJsonRequest * GetSchemaAsJsonResponse::request() const
{
    Q_D(const GetSchemaAsJsonResponse);
    return static_cast<const GetSchemaAsJsonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetSchemaAsJson \a response.
 */
void GetSchemaAsJsonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaAsJsonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetSchemaAsJsonResponsePrivate
 * \brief The GetSchemaAsJsonResponsePrivate class provides private implementation for GetSchemaAsJsonResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetSchemaAsJsonResponsePrivate object with public implementation \a q.
 */
GetSchemaAsJsonResponsePrivate::GetSchemaAsJsonResponsePrivate(
    GetSchemaAsJsonResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetSchemaAsJson response element from \a xml.
 */
void GetSchemaAsJsonResponsePrivate::parseGetSchemaAsJsonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaAsJsonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
