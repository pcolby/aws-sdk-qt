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

#include "getreplicationconfigurationresponse.h"
#include "getreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::GetReplicationConfigurationResponse
 * \brief The GetReplicationConfigurationResponse class provides an interace for mgn GetReplicationConfiguration responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::getReplicationConfiguration
 */

/*!
 * Constructs a GetReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationConfigurationResponse::GetReplicationConfigurationResponse(
        const GetReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new GetReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationConfigurationRequest * GetReplicationConfigurationResponse::request() const
{
    Q_D(const GetReplicationConfigurationResponse);
    return static_cast<const GetReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn GetReplicationConfiguration \a response.
 */
void GetReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::GetReplicationConfigurationResponsePrivate
 * \brief The GetReplicationConfigurationResponsePrivate class provides private implementation for GetReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a GetReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetReplicationConfigurationResponsePrivate::GetReplicationConfigurationResponsePrivate(
    GetReplicationConfigurationResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn GetReplicationConfiguration response element from \a xml.
 */
void GetReplicationConfigurationResponsePrivate::parseGetReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
