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

#include "rebootrelationaldatabaseresponse.h"
#include "rebootrelationaldatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseResponse
 * \brief The RebootRelationalDatabaseResponse class provides an interace for Lightsail RebootRelationalDatabase responses.
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
 * \sa LightsailClient::rebootRelationalDatabase
 */

/*!
 * Constructs a RebootRelationalDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
RebootRelationalDatabaseResponse::RebootRelationalDatabaseResponse(
        const RebootRelationalDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new RebootRelationalDatabaseResponsePrivate(this), parent)
{
    setRequest(new RebootRelationalDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootRelationalDatabaseRequest * RebootRelationalDatabaseResponse::request() const
{
    Q_D(const RebootRelationalDatabaseResponse);
    return static_cast<const RebootRelationalDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail RebootRelationalDatabase \a response.
 */
void RebootRelationalDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootRelationalDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseResponsePrivate
 * \brief The RebootRelationalDatabaseResponsePrivate class provides private implementation for RebootRelationalDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a RebootRelationalDatabaseResponsePrivate object with public implementation \a q.
 */
RebootRelationalDatabaseResponsePrivate::RebootRelationalDatabaseResponsePrivate(
    RebootRelationalDatabaseResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail RebootRelationalDatabase response element from \a xml.
 */
void RebootRelationalDatabaseResponsePrivate::parseRebootRelationalDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootRelationalDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
