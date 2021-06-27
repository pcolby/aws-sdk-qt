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

#include "updateinstanceaccesscontrolattributeconfigurationresponse.h"
#include "updateinstanceaccesscontrolattributeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::UpdateInstanceAccessControlAttributeConfigurationResponse
 * \brief The UpdateInstanceAccessControlAttributeConfigurationResponse class provides an interace for SSOAdmin UpdateInstanceAccessControlAttributeConfiguration responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::updateInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a UpdateInstanceAccessControlAttributeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInstanceAccessControlAttributeConfigurationResponse::UpdateInstanceAccessControlAttributeConfigurationResponse(
        const UpdateInstanceAccessControlAttributeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new UpdateInstanceAccessControlAttributeConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceAccessControlAttributeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInstanceAccessControlAttributeConfigurationRequest * UpdateInstanceAccessControlAttributeConfigurationResponse::request() const
{
    return static_cast<const UpdateInstanceAccessControlAttributeConfigurationRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin UpdateInstanceAccessControlAttributeConfiguration \a response.
 */
void UpdateInstanceAccessControlAttributeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInstanceAccessControlAttributeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::UpdateInstanceAccessControlAttributeConfigurationResponsePrivate
 * \brief The UpdateInstanceAccessControlAttributeConfigurationResponsePrivate class provides private implementation for UpdateInstanceAccessControlAttributeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a UpdateInstanceAccessControlAttributeConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateInstanceAccessControlAttributeConfigurationResponsePrivate::UpdateInstanceAccessControlAttributeConfigurationResponsePrivate(
    UpdateInstanceAccessControlAttributeConfigurationResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin UpdateInstanceAccessControlAttributeConfiguration response element from \a xml.
 */
void UpdateInstanceAccessControlAttributeConfigurationResponsePrivate::parseUpdateInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceAccessControlAttributeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
