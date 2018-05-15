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
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
