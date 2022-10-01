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

#include "updatevolumeresponse.h"
#include "updatevolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateVolumeResponse
 * \brief The UpdateVolumeResponse class provides an interace for FSx UpdateVolume responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateVolume
 */

/*!
 * Constructs a UpdateVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVolumeResponse::UpdateVolumeResponse(
        const UpdateVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateVolumeResponsePrivate(this), parent)
{
    setRequest(new UpdateVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVolumeRequest * UpdateVolumeResponse::request() const
{
    Q_D(const UpdateVolumeResponse);
    return static_cast<const UpdateVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx UpdateVolume \a response.
 */
void UpdateVolumeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateVolumeResponsePrivate
 * \brief The UpdateVolumeResponsePrivate class provides private implementation for UpdateVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateVolumeResponsePrivate object with public implementation \a q.
 */
UpdateVolumeResponsePrivate::UpdateVolumeResponsePrivate(
    UpdateVolumeResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateVolume response element from \a xml.
 */
void UpdateVolumeResponsePrivate::parseUpdateVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVolumeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
