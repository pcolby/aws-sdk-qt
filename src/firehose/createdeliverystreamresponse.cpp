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

#include "createdeliverystreamresponse.h"
#include "createdeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::CreateDeliveryStreamResponse
 * \brief The CreateDeliveryStreamResponse class provides an interace for Firehose CreateDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::createDeliveryStream
 */

/*!
 * Constructs a CreateDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeliveryStreamResponse::CreateDeliveryStreamResponse(
        const CreateDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new CreateDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new CreateDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeliveryStreamRequest * CreateDeliveryStreamResponse::request() const
{
    Q_D(const CreateDeliveryStreamResponse);
    return static_cast<const CreateDeliveryStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose CreateDeliveryStream \a response.
 */
void CreateDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::CreateDeliveryStreamResponsePrivate
 * \brief The CreateDeliveryStreamResponsePrivate class provides private implementation for CreateDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a CreateDeliveryStreamResponsePrivate object with public implementation \a q.
 */
CreateDeliveryStreamResponsePrivate::CreateDeliveryStreamResponsePrivate(
    CreateDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose CreateDeliveryStream response element from \a xml.
 */
void CreateDeliveryStreamResponsePrivate::parseCreateDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeliveryStreamResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
