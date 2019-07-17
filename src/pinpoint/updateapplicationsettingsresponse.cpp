/*
    Copyright 2013-2019 Paul Colby

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

#include "updateapplicationsettingsresponse.h"
#include "updateapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsResponse
 * \brief The UpdateApplicationSettingsResponse class provides an interace for Pinpoint UpdateApplicationSettings responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApplicationSettings
 */

/*!
 * Constructs a UpdateApplicationSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationSettingsResponse::UpdateApplicationSettingsResponse(
        const UpdateApplicationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationSettingsRequest * UpdateApplicationSettingsResponse::request() const
{
    Q_D(const UpdateApplicationSettingsResponse);
    return static_cast<const UpdateApplicationSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApplicationSettings \a response.
 */
void UpdateApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsResponsePrivate
 * \brief The UpdateApplicationSettingsResponsePrivate class provides private implementation for UpdateApplicationSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApplicationSettingsResponsePrivate object with public implementation \a q.
 */
UpdateApplicationSettingsResponsePrivate::UpdateApplicationSettingsResponsePrivate(
    UpdateApplicationSettingsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApplicationSettings response element from \a xml.
 */
void UpdateApplicationSettingsResponsePrivate::parseUpdateApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
