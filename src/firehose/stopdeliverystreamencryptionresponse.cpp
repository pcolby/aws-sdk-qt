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
    return static_cast<const StopDeliveryStreamEncryptionRequest *>(FirehoseResponse::request());
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
