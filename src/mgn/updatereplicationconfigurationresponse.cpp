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

#include "updatereplicationconfigurationresponse.h"
#include "updatereplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationResponse
 * \brief The UpdateReplicationConfigurationResponse class provides an interace for mgn UpdateReplicationConfiguration responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateReplicationConfiguration
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationConfigurationResponse::UpdateReplicationConfigurationResponse(
        const UpdateReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new UpdateReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationConfigurationRequest * UpdateReplicationConfigurationResponse::request() const
{
    return static_cast<const UpdateReplicationConfigurationRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn UpdateReplicationConfiguration \a response.
 */
void UpdateReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationResponsePrivate
 * \brief The UpdateReplicationConfigurationResponsePrivate class provides private implementation for UpdateReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateReplicationConfigurationResponsePrivate::UpdateReplicationConfigurationResponsePrivate(
    UpdateReplicationConfigurationResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn UpdateReplicationConfiguration response element from \a xml.
 */
void UpdateReplicationConfigurationResponsePrivate::parseUpdateReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
