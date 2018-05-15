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
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
