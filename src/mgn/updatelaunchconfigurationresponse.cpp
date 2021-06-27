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

#include "updatelaunchconfigurationresponse.h"
#include "updatelaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateLaunchConfigurationResponse
 * \brief The UpdateLaunchConfigurationResponse class provides an interace for mgn UpdateLaunchConfiguration responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateLaunchConfiguration
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchConfigurationResponse::UpdateLaunchConfigurationResponse(
        const UpdateLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new UpdateLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchConfigurationRequest * UpdateLaunchConfigurationResponse::request() const
{
    return static_cast<const UpdateLaunchConfigurationRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn UpdateLaunchConfiguration \a response.
 */
void UpdateLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::UpdateLaunchConfigurationResponsePrivate
 * \brief The UpdateLaunchConfigurationResponsePrivate class provides private implementation for UpdateLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateLaunchConfigurationResponsePrivate::UpdateLaunchConfigurationResponsePrivate(
    UpdateLaunchConfigurationResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn UpdateLaunchConfiguration response element from \a xml.
 */
void UpdateLaunchConfigurationResponsePrivate::parseUpdateLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
