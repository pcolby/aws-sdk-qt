/*
    Copyright 2013-2020 Paul Colby

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

#include "addtagstostreamresponse.h"
#include "addtagstostreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::AddTagsToStreamResponse
 * \brief The AddTagsToStreamResponse class provides an interace for Kinesis AddTagsToStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::addTagsToStream
 */

/*!
 * Constructs a AddTagsToStreamResponse object for \a reply to \a request, with parent \a parent.
 */
AddTagsToStreamResponse::AddTagsToStreamResponse(
        const AddTagsToStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new AddTagsToStreamResponsePrivate(this), parent)
{
    setRequest(new AddTagsToStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddTagsToStreamRequest * AddTagsToStreamResponse::request() const
{
    Q_D(const AddTagsToStreamResponse);
    return static_cast<const AddTagsToStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis AddTagsToStream \a response.
 */
void AddTagsToStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddTagsToStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::AddTagsToStreamResponsePrivate
 * \brief The AddTagsToStreamResponsePrivate class provides private implementation for AddTagsToStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a AddTagsToStreamResponsePrivate object with public implementation \a q.
 */
AddTagsToStreamResponsePrivate::AddTagsToStreamResponsePrivate(
    AddTagsToStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis AddTagsToStream response element from \a xml.
 */
void AddTagsToStreamResponsePrivate::parseAddTagsToStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
