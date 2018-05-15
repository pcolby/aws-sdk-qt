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

#include "removetagsfromstreamresponse.h"
#include "removetagsfromstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::RemoveTagsFromStreamResponse
 * \brief The RemoveTagsFromStreamResponse class provides an interace for Kinesis RemoveTagsFromStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::removeTagsFromStream
 */

/*!
 * Constructs a RemoveTagsFromStreamResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromStreamResponse::RemoveTagsFromStreamResponse(
        const RemoveTagsFromStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new RemoveTagsFromStreamResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromStreamRequest * RemoveTagsFromStreamResponse::request() const
{
    Q_D(const RemoveTagsFromStreamResponse);
    return static_cast<const RemoveTagsFromStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis RemoveTagsFromStream \a response.
 */
void RemoveTagsFromStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsFromStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::RemoveTagsFromStreamResponsePrivate
 * \brief The RemoveTagsFromStreamResponsePrivate class provides private implementation for RemoveTagsFromStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a RemoveTagsFromStreamResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromStreamResponsePrivate::RemoveTagsFromStreamResponsePrivate(
    RemoveTagsFromStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis RemoveTagsFromStream response element from \a xml.
 */
void RemoveTagsFromStreamResponsePrivate::parseRemoveTagsFromStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
