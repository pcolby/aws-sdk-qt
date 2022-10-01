// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectinformationresponse.h"
#include "getobjectinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationResponse
 * \brief The GetObjectInformationResponse class provides an interace for CloudDirectory GetObjectInformation responses.
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
 * \sa CloudDirectoryClient::getObjectInformation
 */

/*!
 * Constructs a GetObjectInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectInformationResponse::GetObjectInformationResponse(
        const GetObjectInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetObjectInformationResponsePrivate(this), parent)
{
    setRequest(new GetObjectInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectInformationRequest * GetObjectInformationResponse::request() const
{
    Q_D(const GetObjectInformationResponse);
    return static_cast<const GetObjectInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetObjectInformation \a response.
 */
void GetObjectInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationResponsePrivate
 * \brief The GetObjectInformationResponsePrivate class provides private implementation for GetObjectInformationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetObjectInformationResponsePrivate object with public implementation \a q.
 */
GetObjectInformationResponsePrivate::GetObjectInformationResponsePrivate(
    GetObjectInformationResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetObjectInformation response element from \a xml.
 */
void GetObjectInformationResponsePrivate::parseGetObjectInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
