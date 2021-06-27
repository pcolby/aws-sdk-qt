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

#include "updatestudiocomponentresponse.h"
#include "updatestudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateStudioComponentResponse
 * \brief The UpdateStudioComponentResponse class provides an interace for NimbleStudio UpdateStudioComponent responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateStudioComponent
 */

/*!
 * Constructs a UpdateStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioComponentResponse::UpdateStudioComponentResponse(
        const UpdateStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new UpdateStudioComponentResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioComponentRequest * UpdateStudioComponentResponse::request() const
{
    return static_cast<const UpdateStudioComponentRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio UpdateStudioComponent \a response.
 */
void UpdateStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::UpdateStudioComponentResponsePrivate
 * \brief The UpdateStudioComponentResponsePrivate class provides private implementation for UpdateStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateStudioComponentResponsePrivate object with public implementation \a q.
 */
UpdateStudioComponentResponsePrivate::UpdateStudioComponentResponsePrivate(
    UpdateStudioComponentResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio UpdateStudioComponent response element from \a xml.
 */
void UpdateStudioComponentResponsePrivate::parseUpdateStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
