// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstreamencryptionresponse.h"
#include "startstreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StartStreamEncryptionResponse
 * \brief The StartStreamEncryptionResponse class provides an interace for Kinesis StartStreamEncryption responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::startStreamEncryption
 */

/*!
 * Constructs a StartStreamEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartStreamEncryptionResponse::StartStreamEncryptionResponse(
        const StartStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new StartStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StartStreamEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStreamEncryptionRequest * StartStreamEncryptionResponse::request() const
{
    Q_D(const StartStreamEncryptionResponse);
    return static_cast<const StartStreamEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis StartStreamEncryption \a response.
 */
void StartStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStreamEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::StartStreamEncryptionResponsePrivate
 * \brief The StartStreamEncryptionResponsePrivate class provides private implementation for StartStreamEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a StartStreamEncryptionResponsePrivate object with public implementation \a q.
 */
StartStreamEncryptionResponsePrivate::StartStreamEncryptionResponsePrivate(
    StartStreamEncryptionResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis StartStreamEncryption response element from \a xml.
 */
void StartStreamEncryptionResponsePrivate::parseStartStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
