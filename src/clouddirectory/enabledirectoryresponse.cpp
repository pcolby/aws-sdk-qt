// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enabledirectoryresponse.h"
#include "enabledirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::EnableDirectoryResponse
 * \brief The EnableDirectoryResponse class provides an interace for CloudDirectory EnableDirectory responses.
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
 * \sa CloudDirectoryClient::enableDirectory
 */

/*!
 * Constructs a EnableDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDirectoryResponse::EnableDirectoryResponse(
        const EnableDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new EnableDirectoryResponsePrivate(this), parent)
{
    setRequest(new EnableDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDirectoryRequest * EnableDirectoryResponse::request() const
{
    Q_D(const EnableDirectoryResponse);
    return static_cast<const EnableDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory EnableDirectory \a response.
 */
void EnableDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::EnableDirectoryResponsePrivate
 * \brief The EnableDirectoryResponsePrivate class provides private implementation for EnableDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a EnableDirectoryResponsePrivate object with public implementation \a q.
 */
EnableDirectoryResponsePrivate::EnableDirectoryResponsePrivate(
    EnableDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory EnableDirectory response element from \a xml.
 */
void EnableDirectoryResponsePrivate::parseEnableDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
