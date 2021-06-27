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

#include "updatemultiplexresponse.h"
#include "updatemultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexResponse
 * \brief The UpdateMultiplexResponse class provides an interace for MediaLive UpdateMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplex
 */

/*!
 * Constructs a UpdateMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMultiplexResponse::UpdateMultiplexResponse(
        const UpdateMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateMultiplexResponsePrivate(this), parent)
{
    setRequest(new UpdateMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMultiplexRequest * UpdateMultiplexResponse::request() const
{
    return static_cast<const UpdateMultiplexRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateMultiplex \a response.
 */
void UpdateMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexResponsePrivate
 * \brief The UpdateMultiplexResponsePrivate class provides private implementation for UpdateMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexResponsePrivate object with public implementation \a q.
 */
UpdateMultiplexResponsePrivate::UpdateMultiplexResponsePrivate(
    UpdateMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateMultiplex response element from \a xml.
 */
void UpdateMultiplexResponsePrivate::parseUpdateMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
