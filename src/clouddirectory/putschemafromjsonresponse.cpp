// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putschemafromjsonresponse.h"
#include "putschemafromjsonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::PutSchemaFromJsonResponse
 * \brief The PutSchemaFromJsonResponse class provides an interace for CloudDirectory PutSchemaFromJson responses.
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
 * \sa CloudDirectoryClient::putSchemaFromJson
 */

/*!
 * Constructs a PutSchemaFromJsonResponse object for \a reply to \a request, with parent \a parent.
 */
PutSchemaFromJsonResponse::PutSchemaFromJsonResponse(
        const PutSchemaFromJsonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new PutSchemaFromJsonResponsePrivate(this), parent)
{
    setRequest(new PutSchemaFromJsonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSchemaFromJsonRequest * PutSchemaFromJsonResponse::request() const
{
    Q_D(const PutSchemaFromJsonResponse);
    return static_cast<const PutSchemaFromJsonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory PutSchemaFromJson \a response.
 */
void PutSchemaFromJsonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSchemaFromJsonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::PutSchemaFromJsonResponsePrivate
 * \brief The PutSchemaFromJsonResponsePrivate class provides private implementation for PutSchemaFromJsonResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a PutSchemaFromJsonResponsePrivate object with public implementation \a q.
 */
PutSchemaFromJsonResponsePrivate::PutSchemaFromJsonResponsePrivate(
    PutSchemaFromJsonResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory PutSchemaFromJson response element from \a xml.
 */
void PutSchemaFromJsonResponsePrivate::parsePutSchemaFromJsonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSchemaFromJsonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
