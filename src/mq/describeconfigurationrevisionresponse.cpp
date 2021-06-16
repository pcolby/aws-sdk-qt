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

#include "describeconfigurationrevisionresponse.h"
#include "describeconfigurationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionResponse
 * \brief The DescribeConfigurationRevisionResponse class provides an interace for MQ DescribeConfigurationRevision responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeConfigurationRevision
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationRevisionResponse::DescribeConfigurationRevisionResponse(
        const DescribeConfigurationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeConfigurationRevisionResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRevisionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationRevisionRequest * DescribeConfigurationRevisionResponse::request() const
{
    Q_D(const DescribeConfigurationRevisionResponse);
    return static_cast<const DescribeConfigurationRevisionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MQ DescribeConfigurationRevision \a response.
 */
void DescribeConfigurationRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionResponsePrivate
 * \brief The DescribeConfigurationRevisionResponsePrivate class provides private implementation for DescribeConfigurationRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeConfigurationRevisionResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationRevisionResponsePrivate::DescribeConfigurationRevisionResponsePrivate(
    DescribeConfigurationRevisionResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ DescribeConfigurationRevision response element from \a xml.
 */
void DescribeConfigurationRevisionResponsePrivate::parseDescribeConfigurationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
