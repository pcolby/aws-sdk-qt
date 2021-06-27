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

#include "getlaunchconfigurationresponse.h"
#include "getlaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::GetLaunchConfigurationResponse
 * \brief The GetLaunchConfigurationResponse class provides an interace for mgn GetLaunchConfiguration responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::getLaunchConfiguration
 */

/*!
 * Constructs a GetLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchConfigurationResponse::GetLaunchConfigurationResponse(
        const GetLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new GetLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchConfigurationRequest * GetLaunchConfigurationResponse::request() const
{
    return static_cast<const GetLaunchConfigurationRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn GetLaunchConfiguration \a response.
 */
void GetLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::GetLaunchConfigurationResponsePrivate
 * \brief The GetLaunchConfigurationResponsePrivate class provides private implementation for GetLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a GetLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
GetLaunchConfigurationResponsePrivate::GetLaunchConfigurationResponsePrivate(
    GetLaunchConfigurationResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn GetLaunchConfiguration response element from \a xml.
 */
void GetLaunchConfigurationResponsePrivate::parseGetLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
