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

#include "updatelaunchprofileresponse.h"
#include "updatelaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileResponse
 * \brief The UpdateLaunchProfileResponse class provides an interace for NimbleStudio UpdateLaunchProfile responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateLaunchProfile
 */

/*!
 * Constructs a UpdateLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchProfileResponse::UpdateLaunchProfileResponse(
        const UpdateLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new UpdateLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchProfileRequest * UpdateLaunchProfileResponse::request() const
{
    Q_D(const UpdateLaunchProfileResponse);
    return static_cast<const UpdateLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio UpdateLaunchProfile \a response.
 */
void UpdateLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileResponsePrivate
 * \brief The UpdateLaunchProfileResponsePrivate class provides private implementation for UpdateLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateLaunchProfileResponsePrivate object with public implementation \a q.
 */
UpdateLaunchProfileResponsePrivate::UpdateLaunchProfileResponsePrivate(
    UpdateLaunchProfileResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio UpdateLaunchProfile response element from \a xml.
 */
void UpdateLaunchProfileResponsePrivate::parseUpdateLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
