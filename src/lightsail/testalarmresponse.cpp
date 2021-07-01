/*
    Copyright 2013-2021 Paul Colby

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

#include "testalarmresponse.h"
#include "testalarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::TestAlarmResponse
 * \brief The TestAlarmResponse class provides an interace for Lightsail TestAlarm responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (AWS) for developers who need to build
 *  websites or web applications. It includes everything you need to launch your project quickly - instances (virtual
 *  private servers), container services, managed databases, SSD-based block storage, static IP addresses, load balancers,
 *  content delivery network (CDN) distributions, DNS management of registered domains, and resource snapshots (backups) -
 *  for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported AWS Regions, endpoints, and service quotas of the Lightsail service,
 *  see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints and Quotas</a> in
 *  the <i>AWS General
 *
 * \sa LightsailClient::testAlarm
 */

/*!
 * Constructs a TestAlarmResponse object for \a reply to \a request, with parent \a parent.
 */
TestAlarmResponse::TestAlarmResponse(
        const TestAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new TestAlarmResponsePrivate(this), parent)
{
    setRequest(new TestAlarmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestAlarmRequest * TestAlarmResponse::request() const
{
    Q_D(const TestAlarmResponse);
    return static_cast<const TestAlarmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail TestAlarm \a response.
 */
void TestAlarmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::TestAlarmResponsePrivate
 * \brief The TestAlarmResponsePrivate class provides private implementation for TestAlarmResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a TestAlarmResponsePrivate object with public implementation \a q.
 */
TestAlarmResponsePrivate::TestAlarmResponsePrivate(
    TestAlarmResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail TestAlarm response element from \a xml.
 */
void TestAlarmResponsePrivate::parseTestAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestAlarmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
