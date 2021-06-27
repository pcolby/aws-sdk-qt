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

#include "createmultiplexresponse.h"
#include "createmultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexResponse
 * \brief The CreateMultiplexResponse class provides an interace for MediaLive CreateMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplex
 */

/*!
 * Constructs a CreateMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultiplexResponse::CreateMultiplexResponse(
        const CreateMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateMultiplexResponsePrivate(this), parent)
{
    setRequest(new CreateMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultiplexRequest * CreateMultiplexResponse::request() const
{
    return static_cast<const CreateMultiplexRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateMultiplex \a response.
 */
void CreateMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexResponsePrivate
 * \brief The CreateMultiplexResponsePrivate class provides private implementation for CreateMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexResponsePrivate object with public implementation \a q.
 */
CreateMultiplexResponsePrivate::CreateMultiplexResponsePrivate(
    CreateMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateMultiplex response element from \a xml.
 */
void CreateMultiplexResponsePrivate::parseCreateMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
