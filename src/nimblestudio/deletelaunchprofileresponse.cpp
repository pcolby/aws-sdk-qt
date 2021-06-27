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

#include "deletelaunchprofileresponse.h"
#include "deletelaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileResponse
 * \brief The DeleteLaunchProfileResponse class provides an interace for NimbleStudio DeleteLaunchProfile responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteLaunchProfile
 */

/*!
 * Constructs a DeleteLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchProfileResponse::DeleteLaunchProfileResponse(
        const DeleteLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchProfileRequest * DeleteLaunchProfileResponse::request() const
{
    return static_cast<const DeleteLaunchProfileRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteLaunchProfile \a response.
 */
void DeleteLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileResponsePrivate
 * \brief The DeleteLaunchProfileResponsePrivate class provides private implementation for DeleteLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteLaunchProfileResponsePrivate object with public implementation \a q.
 */
DeleteLaunchProfileResponsePrivate::DeleteLaunchProfileResponsePrivate(
    DeleteLaunchProfileResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteLaunchProfile response element from \a xml.
 */
void DeleteLaunchProfileResponsePrivate::parseDeleteLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
