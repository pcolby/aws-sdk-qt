// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DeleteDeliveryStreamResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
