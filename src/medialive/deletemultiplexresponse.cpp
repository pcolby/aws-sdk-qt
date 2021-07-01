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

#include "deletemultiplexresponse.h"
#include "deletemultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexResponse
 * \brief The DeleteMultiplexResponse class provides an interace for MediaLive DeleteMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplex
 */

/*!
 * Constructs a DeleteMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiplexResponse::DeleteMultiplexResponse(
        const DeleteMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteMultiplexResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiplexRequest * DeleteMultiplexResponse::request() const
{
    Q_D(const DeleteMultiplexResponse);
    return static_cast<const DeleteMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteMultiplex \a response.
 */
void DeleteMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexResponsePrivate
 * \brief The DeleteMultiplexResponsePrivate class provides private implementation for DeleteMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexResponsePrivate object with public implementation \a q.
 */
DeleteMultiplexResponsePrivate::DeleteMultiplexResponsePrivate(
    DeleteMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteMultiplex response element from \a xml.
 */
void DeleteMultiplexResponsePrivate::parseDeleteMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
