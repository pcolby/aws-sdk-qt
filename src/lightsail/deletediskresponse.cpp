/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletediskresponse.h"
#include "deletediskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteDiskResponse
 * \brief The DeleteDiskResponse class provides an interace for Lightsail DeleteDisk responses.
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
 * \sa LightsailClient::deleteDisk
 */

/*!
 * Constructs a DeleteDiskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDiskResponse::DeleteDiskResponse(
        const DeleteDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDiskResponsePrivate(this), parent)
{
    setRequest(new DeleteDiskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDiskRequest * DeleteDiskResponse::request() const
{
    Q_D(const DeleteDiskResponse);
    return static_cast<const DeleteDiskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail DeleteDisk \a response.
 */
void DeleteDiskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::DeleteDiskResponsePrivate
 * \brief The DeleteDiskResponsePrivate class provides private implementation for DeleteDiskResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteDiskResponsePrivate object with public implementation \a q.
 */
DeleteDiskResponsePrivate::DeleteDiskResponsePrivate(
    DeleteDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail DeleteDisk response element from \a xml.
 */
void DeleteDiskResponsePrivate::parseDeleteDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
