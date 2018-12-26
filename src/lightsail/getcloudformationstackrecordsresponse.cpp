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

#include "getcloudformationstackrecordsresponse.h"
#include "getcloudformationstackrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetCloudFormationStackRecordsResponse
 * \brief The GetCloudFormationStackRecordsResponse class provides an interace for Lightsail GetCloudFormationStackRecords responses.
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
 * \sa LightsailClient::getCloudFormationStackRecords
 */

/*!
 * Constructs a GetCloudFormationStackRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCloudFormationStackRecordsResponse::GetCloudFormationStackRecordsResponse(
        const GetCloudFormationStackRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetCloudFormationStackRecordsResponsePrivate(this), parent)
{
    setRequest(new GetCloudFormationStackRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCloudFormationStackRecordsRequest * GetCloudFormationStackRecordsResponse::request() const
{
    Q_D(const GetCloudFormationStackRecordsResponse);
    return static_cast<const GetCloudFormationStackRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail GetCloudFormationStackRecords \a response.
 */
void GetCloudFormationStackRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCloudFormationStackRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::GetCloudFormationStackRecordsResponsePrivate
 * \brief The GetCloudFormationStackRecordsResponsePrivate class provides private implementation for GetCloudFormationStackRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetCloudFormationStackRecordsResponsePrivate object with public implementation \a q.
 */
GetCloudFormationStackRecordsResponsePrivate::GetCloudFormationStackRecordsResponsePrivate(
    GetCloudFormationStackRecordsResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail GetCloudFormationStackRecords response element from \a xml.
 */
void GetCloudFormationStackRecordsResponsePrivate::parseGetCloudFormationStackRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCloudFormationStackRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
