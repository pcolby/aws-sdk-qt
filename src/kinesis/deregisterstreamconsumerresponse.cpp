// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
