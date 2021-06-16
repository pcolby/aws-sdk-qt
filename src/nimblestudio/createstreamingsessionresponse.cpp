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

#include "createstreamingsessionresponse.h"
#include "createstreamingsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionResponse
 * \brief The CreateStreamingSessionResponse class provides an interace for NimbleStudio CreateStreamingSession responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingSession
 */

/*!
 * Constructs a CreateStreamingSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingSessionResponse::CreateStreamingSessionResponse(
        const CreateStreamingSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new CreateStreamingSessionResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingSessionRequest * CreateStreamingSessionResponse::request() const
{
    Q_D(const CreateStreamingSessionResponse);
    return static_cast<const CreateStreamingSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio CreateStreamingSession \a response.
 */
void CreateStreamingSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionResponsePrivate
 * \brief The CreateStreamingSessionResponsePrivate class provides private implementation for CreateStreamingSessionResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingSessionResponsePrivate object with public implementation \a q.
 */
CreateStreamingSessionResponsePrivate::CreateStreamingSessionResponsePrivate(
    CreateStreamingSessionResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio CreateStreamingSession response element from \a xml.
 */
void CreateStreamingSessionResponsePrivate::parseCreateStreamingSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
