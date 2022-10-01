// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappliedschemaversionresponse.h"
#include "getappliedschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetAppliedSchemaVersionResponse
 * \brief The GetAppliedSchemaVersionResponse class provides an interace for CloudDirectory GetAppliedSchemaVersion responses.
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
 * \sa CloudDirectoryClient::getAppliedSchemaVersion
 */

/*!
 * Constructs a GetAppliedSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppliedSchemaVersionResponse::GetAppliedSchemaVersionResponse(
        const GetAppliedSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetAppliedSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new GetAppliedSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppliedSchemaVersionRequest * GetAppliedSchemaVersionResponse::request() const
{
    Q_D(const GetAppliedSchemaVersionResponse);
    return static_cast<const GetAppliedSchemaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetAppliedSchemaVersion \a response.
 */
void GetAppliedSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppliedSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetAppliedSchemaVersionResponsePrivate
 * \brief The GetAppliedSchemaVersionResponsePrivate class provides private implementation for GetAppliedSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetAppliedSchemaVersionResponsePrivate object with public implementation \a q.
 */
GetAppliedSchemaVersionResponsePrivate::GetAppliedSchemaVersionResponsePrivate(
    GetAppliedSchemaVersionResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetAppliedSchemaVersion response element from \a xml.
 */
void GetAppliedSchemaVersionResponsePrivate::parseGetAppliedSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppliedSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
