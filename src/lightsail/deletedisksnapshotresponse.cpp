// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedisksnapshotresponse.h"
#include "deletedisksnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteDiskSnapshotResponse
 * \brief The DeleteDiskSnapshotResponse class provides an interace for Lightsail DeleteDiskSnapshot responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::deleteDiskSnapshot
 */

/*!
 * Constructs a DeleteDiskSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDiskSnapshotResponse::DeleteDiskSnapshotResponse(
        const DeleteDiskSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDiskSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDiskSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDiskSnapshotRequest * DeleteDiskSnapshotResponse::request() const
{
    Q_D(const DeleteDiskSnapshotResponse);
    return static_cast<const DeleteDiskSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail DeleteDiskSnapshot \a response.
 */
void DeleteDiskSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDiskSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::DeleteDiskSnapshotResponsePrivate
 * \brief The DeleteDiskSnapshotResponsePrivate class provides private implementation for DeleteDiskSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteDiskSnapshotResponsePrivate object with public implementation \a q.
 */
DeleteDiskSnapshotResponsePrivate::DeleteDiskSnapshotResponsePrivate(
    DeleteDiskSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail DeleteDiskSnapshot response element from \a xml.
 */
void DeleteDiskSnapshotResponsePrivate::parseDeleteDiskSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiskSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
