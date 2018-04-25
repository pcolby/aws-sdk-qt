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

#include "deletedeliverystreamresponse.h"
#include "deletedeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::DeleteDeliveryStreamResponse
 * \brief The DeleteDeliveryStreamResponse class provides an interace for Firehose DeleteDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::deleteDeliveryStream
 */

/*!
 * Constructs a DeleteDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeliveryStreamResponse::DeleteDeliveryStreamResponse(
        const DeleteDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new DeleteDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeliveryStreamRequest * DeleteDeliveryStreamResponse::request() const
{
    Q_D(const DeleteDeliveryStreamResponse);
    return static_cast<const DeleteDeliveryStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose DeleteDeliveryStream \a response.
 */
void DeleteDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::DeleteDeliveryStreamResponsePrivate
 * \brief The DeleteDeliveryStreamResponsePrivate class provides private implementation for DeleteDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a DeleteDeliveryStreamResponsePrivate object with public implementation \a q.
 */
DeleteDeliveryStreamResponsePrivate::DeleteDeliveryStreamResponsePrivate(
    DeleteDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose DeleteDeliveryStream response element from \a xml.
 */
void DeleteDeliveryStreamResponsePrivate::parseDeleteDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeliveryStreamResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
