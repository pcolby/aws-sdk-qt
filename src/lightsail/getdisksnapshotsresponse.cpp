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

#include "getdisksnapshotsresponse.h"
#include "getdisksnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetDiskSnapshotsResponse
 * \brief The GetDiskSnapshotsResponse class provides an interace for Lightsail GetDiskSnapshots responses.
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
 * \sa LightsailClient::getDiskSnapshots
 */

/*!
 * Constructs a GetDiskSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDiskSnapshotsResponse::GetDiskSnapshotsResponse(
        const GetDiskSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDiskSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetDiskSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDiskSnapshotsRequest * GetDiskSnapshotsResponse::request() const
{
    Q_D(const GetDiskSnapshotsResponse);
    return static_cast<const GetDiskSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetDiskSnapshots \a response.
 */
void GetDiskSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDiskSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetDiskSnapshotsResponsePrivate
 * \brief The GetDiskSnapshotsResponsePrivate class provides private implementation for GetDiskSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetDiskSnapshotsResponsePrivate object with public implementation \a q.
 */
GetDiskSnapshotsResponsePrivate::GetDiskSnapshotsResponsePrivate(
    GetDiskSnapshotsResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetDiskSnapshots response element from \a xml.
 */
void GetDiskSnapshotsResponsePrivate::parseGetDiskSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiskSnapshotsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
