/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getinstancesnapshotresponse.h"
#include "getinstancesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetInstanceSnapshotResponse
 * \brief The GetInstanceSnapshotResponse class provides an interace for Lightsail GetInstanceSnapshot responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::getInstanceSnapshot
 */

/*!
 * Constructs a GetInstanceSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstanceSnapshotResponse::GetInstanceSnapshotResponse(
        const GetInstanceSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetInstanceSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstanceSnapshotRequest * GetInstanceSnapshotResponse::request() const
{
    Q_D(const GetInstanceSnapshotResponse);
    return static_cast<const GetInstanceSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetInstanceSnapshot \a response.
 */
void GetInstanceSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInstanceSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetInstanceSnapshotResponsePrivate
 * \brief The GetInstanceSnapshotResponsePrivate class provides private implementation for GetInstanceSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetInstanceSnapshotResponsePrivate object with public implementation \a q.
 */
GetInstanceSnapshotResponsePrivate::GetInstanceSnapshotResponsePrivate(
    GetInstanceSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetInstanceSnapshot response element from \a xml.
 */
void GetInstanceSnapshotResponsePrivate::parseGetInstanceSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
