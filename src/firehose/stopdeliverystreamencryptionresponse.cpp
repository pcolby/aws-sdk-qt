// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdeliverystreamencryptionresponse.h"
#include "stopdeliverystreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::StopDeliveryStreamEncryptionResponse
 * \brief The StopDeliveryStreamEncryptionResponse class provides an interace for Firehose StopDeliveryStreamEncryption responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::stopDeliveryStreamEncryption
 */

/*!
 * Constructs a StopDeliveryStreamEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
StopDeliveryStreamEncryptionResponse::StopDeliveryStreamEncryptionResponse(
        const StopDeliveryStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new StopDeliveryStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StopDeliveryStreamEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDeliveryStreamEncryptionRequest * StopDeliveryStreamEncryptionResponse::request() const
{
    Q_D(const StopDeliveryStreamEncryptionResponse);
    return static_cast<const StopDeliveryStreamEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose StopDeliveryStreamEncryption \a response.
 */
void StopDeliveryStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDeliveryStreamEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::StopDeliveryStreamEncryptionResponsePrivate
 * \brief The StopDeliveryStreamEncryptionResponsePrivate class provides private implementation for StopDeliveryStreamEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a StopDeliveryStreamEncryptionResponsePrivate object with public implementation \a q.
 */
StopDeliveryStreamEncryptionResponsePrivate::StopDeliveryStreamEncryptionResponsePrivate(
    StopDeliveryStreamEncryptionResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose StopDeliveryStreamEncryption response element from \a xml.
 */
void StopDeliveryStreamEncryptionResponsePrivate::parseStopDeliveryStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDeliveryStreamEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
