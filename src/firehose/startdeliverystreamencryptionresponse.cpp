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
