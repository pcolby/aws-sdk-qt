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

#include "createstreamingsessionstreamresponse.h"
#include "createstreamingsessionstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionStreamResponse
 * \brief The CreateStreamingSessionStreamResponse class provides an interace for NimbleStudio CreateStreamingSessionStream responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingSessionStream
 */

/*!
 * Constructs a CreateStreamingSessionStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingSessionStreamResponse::CreateStreamingSessionStreamResponse(
        const CreateStreamingSessionStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new CreateStreamingSessionStreamResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingSessionStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingSessionStreamRequest * CreateStreamingSessionStreamResponse::request() const
{
    Q_D(const CreateStreamingSessionStreamResponse);
    return static_cast<const CreateStreamingSessionStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio CreateStreamingSessionStream \a response.
 */
void CreateStreamingSessionStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingSessionStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionStreamResponsePrivate
 * \brief The CreateStreamingSessionStreamResponsePrivate class provides private implementation for CreateStreamingSessionStreamResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingSessionStreamResponsePrivate object with public implementation \a q.
 */
CreateStreamingSessionStreamResponsePrivate::CreateStreamingSessionStreamResponsePrivate(
    CreateStreamingSessionStreamResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio CreateStreamingSessionStream response element from \a xml.
 */
void CreateStreamingSessionStreamResponsePrivate::parseCreateStreamingSessionStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingSessionStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
