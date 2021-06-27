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

#include "createlaunchprofileresponse.h"
#include "createlaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateLaunchProfileResponse
 * \brief The CreateLaunchProfileResponse class provides an interace for NimbleStudio CreateLaunchProfile responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createLaunchProfile
 */

/*!
 * Constructs a CreateLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLaunchProfileResponse::CreateLaunchProfileResponse(
        const CreateLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new CreateLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLaunchProfileRequest * CreateLaunchProfileResponse::request() const
{
    return static_cast<const CreateLaunchProfileRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio CreateLaunchProfile \a response.
 */
void CreateLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::CreateLaunchProfileResponsePrivate
 * \brief The CreateLaunchProfileResponsePrivate class provides private implementation for CreateLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateLaunchProfileResponsePrivate object with public implementation \a q.
 */
CreateLaunchProfileResponsePrivate::CreateLaunchProfileResponsePrivate(
    CreateLaunchProfileResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio CreateLaunchProfile response element from \a xml.
 */
void CreateLaunchProfileResponsePrivate::parseCreateLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
