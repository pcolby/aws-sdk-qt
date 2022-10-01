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

#include "describeworkerconfigurationresponse.h"
#include "describeworkerconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeWorkerConfigurationResponse
 * \brief The DescribeWorkerConfigurationResponse class provides an interace for KafkaConnect DescribeWorkerConfiguration responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeWorkerConfiguration
 */

/*!
 * Constructs a DescribeWorkerConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkerConfigurationResponse::DescribeWorkerConfigurationResponse(
        const DescribeWorkerConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DescribeWorkerConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkerConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkerConfigurationRequest * DescribeWorkerConfigurationResponse::request() const
{
    Q_D(const DescribeWorkerConfigurationResponse);
    return static_cast<const DescribeWorkerConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DescribeWorkerConfiguration \a response.
 */
void DescribeWorkerConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkerConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DescribeWorkerConfigurationResponsePrivate
 * \brief The DescribeWorkerConfigurationResponsePrivate class provides private implementation for DescribeWorkerConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeWorkerConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeWorkerConfigurationResponsePrivate::DescribeWorkerConfigurationResponsePrivate(
    DescribeWorkerConfigurationResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DescribeWorkerConfiguration response element from \a xml.
 */
void DescribeWorkerConfigurationResponsePrivate::parseDescribeWorkerConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkerConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
