// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopstreamencryptionresponse.h"
#include "stopstreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StopStreamEncryptionResponse
 * \brief The StopStreamEncryptionResponse class provides an interace for Kinesis StopStreamEncryption responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::stopStreamEncryption
 */

/*!
 * Constructs a StopStreamEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
StopStreamEncryptionResponse::StopStreamEncryptionResponse(
        const StopStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new StopStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StopStreamEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopStreamEncryptionRequest * StopStreamEncryptionResponse::request() const
{
    Q_D(const StopStreamEncryptionResponse);
    return static_cast<const StopStreamEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis StopStreamEncryption \a response.
 */
void StopStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopStreamEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::StopStreamEncryptionResponsePrivate
 * \brief The StopStreamEncryptionResponsePrivate class provides private implementation for StopStreamEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a StopStreamEncryptionResponsePrivate object with public implementation \a q.
 */
StopStreamEncryptionResponsePrivate::StopStreamEncryptionResponsePrivate(
    StopStreamEncryptionResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis StopStreamEncryption response element from \a xml.
 */
void StopStreamEncryptionResponsePrivate::parseStopStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStreamEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
