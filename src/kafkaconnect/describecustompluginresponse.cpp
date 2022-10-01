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

#include "describecustompluginresponse.h"
#include "describecustompluginresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginResponse
 * \brief The DescribeCustomPluginResponse class provides an interace for KafkaConnect DescribeCustomPlugin responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeCustomPlugin
 */

/*!
 * Constructs a DescribeCustomPluginResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCustomPluginResponse::DescribeCustomPluginResponse(
        const DescribeCustomPluginRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DescribeCustomPluginResponsePrivate(this), parent)
{
    setRequest(new DescribeCustomPluginRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCustomPluginRequest * DescribeCustomPluginResponse::request() const
{
    Q_D(const DescribeCustomPluginResponse);
    return static_cast<const DescribeCustomPluginRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DescribeCustomPlugin \a response.
 */
void DescribeCustomPluginResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCustomPluginResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginResponsePrivate
 * \brief The DescribeCustomPluginResponsePrivate class provides private implementation for DescribeCustomPluginResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeCustomPluginResponsePrivate object with public implementation \a q.
 */
DescribeCustomPluginResponsePrivate::DescribeCustomPluginResponsePrivate(
    DescribeCustomPluginResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DescribeCustomPlugin response element from \a xml.
 */
void DescribeCustomPluginResponsePrivate::parseDescribeCustomPluginResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCustomPluginResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
