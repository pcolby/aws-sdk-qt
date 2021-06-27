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

#include "registerstreamconsumerresponse.h"
#include "registerstreamconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::RegisterStreamConsumerResponse
 * \brief The RegisterStreamConsumerResponse class provides an interace for Kinesis RegisterStreamConsumer responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::registerStreamConsumer
 */

/*!
 * Constructs a RegisterStreamConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterStreamConsumerResponse::RegisterStreamConsumerResponse(
        const RegisterStreamConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new RegisterStreamConsumerResponsePrivate(this), parent)
{
    setRequest(new RegisterStreamConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterStreamConsumerRequest * RegisterStreamConsumerResponse::request() const
{
    return static_cast<const RegisterStreamConsumerRequest *>(KinesisResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kinesis RegisterStreamConsumer \a response.
 */
void RegisterStreamConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterStreamConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::RegisterStreamConsumerResponsePrivate
 * \brief The RegisterStreamConsumerResponsePrivate class provides private implementation for RegisterStreamConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a RegisterStreamConsumerResponsePrivate object with public implementation \a q.
 */
RegisterStreamConsumerResponsePrivate::RegisterStreamConsumerResponsePrivate(
    RegisterStreamConsumerResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis RegisterStreamConsumer response element from \a xml.
 */
void RegisterStreamConsumerResponsePrivate::parseRegisterStreamConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterStreamConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
