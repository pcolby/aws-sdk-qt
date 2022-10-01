// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdeliverystreamencryptionresponse.h"
#include "startdeliverystreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::StartDeliveryStreamEncryptionResponse
 * \brief The StartDeliveryStreamEncryptionResponse class provides an interace for Firehose StartDeliveryStreamEncryption responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::startDeliveryStreamEncryption
 */

/*!
 * Constructs a StartDeliveryStreamEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartDeliveryStreamEncryptionResponse::StartDeliveryStreamEncryptionResponse(
        const StartDeliveryStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new StartDeliveryStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StartDeliveryStreamEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDeliveryStreamEncryptionRequest * StartDeliveryStreamEncryptionResponse::request() const
{
    Q_D(const StartDeliveryStreamEncryptionResponse);
    return static_cast<const StartDeliveryStreamEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose StartDeliveryStreamEncryption \a response.
 */
void StartDeliveryStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDeliveryStreamEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::StartDeliveryStreamEncryptionResponsePrivate
 * \brief The StartDeliveryStreamEncryptionResponsePrivate class provides private implementation for StartDeliveryStreamEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a StartDeliveryStreamEncryptionResponsePrivate object with public implementation \a q.
 */
StartDeliveryStreamEncryptionResponsePrivate::StartDeliveryStreamEncryptionResponsePrivate(
    StartDeliveryStreamEncryptionResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose StartDeliveryStreamEncryption response element from \a xml.
 */
void StartDeliveryStreamEncryptionResponsePrivate::parseStartDeliveryStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeliveryStreamEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
