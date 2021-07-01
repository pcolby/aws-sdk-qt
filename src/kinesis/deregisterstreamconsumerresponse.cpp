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

#include "deregisterstreamconsumerresponse.h"
#include "deregisterstreamconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DeregisterStreamConsumerResponse
 * \brief The DeregisterStreamConsumerResponse class provides an interace for Kinesis DeregisterStreamConsumer responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::deregisterStreamConsumer
 */

/*!
 * Constructs a DeregisterStreamConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterStreamConsumerResponse::DeregisterStreamConsumerResponse(
        const DeregisterStreamConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DeregisterStreamConsumerResponsePrivate(this), parent)
{
    setRequest(new DeregisterStreamConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterStreamConsumerRequest * DeregisterStreamConsumerResponse::request() const
{
    Q_D(const DeregisterStreamConsumerResponse);
    return static_cast<const DeregisterStreamConsumerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DeregisterStreamConsumer \a response.
 */
void DeregisterStreamConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterStreamConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DeregisterStreamConsumerResponsePrivate
 * \brief The DeregisterStreamConsumerResponsePrivate class provides private implementation for DeregisterStreamConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DeregisterStreamConsumerResponsePrivate object with public implementation \a q.
 */
DeregisterStreamConsumerResponsePrivate::DeregisterStreamConsumerResponsePrivate(
    DeregisterStreamConsumerResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DeregisterStreamConsumer response element from \a xml.
 */
void DeregisterStreamConsumerResponsePrivate::parseDeregisterStreamConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterStreamConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
