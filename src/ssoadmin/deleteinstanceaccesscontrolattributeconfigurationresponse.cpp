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

#include "deleteinstanceaccesscontrolattributeconfigurationresponse.h"
#include "deleteinstanceaccesscontrolattributeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteInstanceAccessControlAttributeConfigurationResponse
 * \brief The DeleteInstanceAccessControlAttributeConfigurationResponse class provides an interace for SSOAdmin DeleteInstanceAccessControlAttributeConfiguration responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a DeleteInstanceAccessControlAttributeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInstanceAccessControlAttributeConfigurationResponse::DeleteInstanceAccessControlAttributeConfigurationResponse(
        const DeleteInstanceAccessControlAttributeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DeleteInstanceAccessControlAttributeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceAccessControlAttributeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInstanceAccessControlAttributeConfigurationRequest * DeleteInstanceAccessControlAttributeConfigurationResponse::request() const
{
    return static_cast<const DeleteInstanceAccessControlAttributeConfigurationRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DeleteInstanceAccessControlAttributeConfiguration \a response.
 */
void DeleteInstanceAccessControlAttributeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInstanceAccessControlAttributeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DeleteInstanceAccessControlAttributeConfigurationResponsePrivate
 * \brief The DeleteInstanceAccessControlAttributeConfigurationResponsePrivate class provides private implementation for DeleteInstanceAccessControlAttributeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteInstanceAccessControlAttributeConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteInstanceAccessControlAttributeConfigurationResponsePrivate::DeleteInstanceAccessControlAttributeConfigurationResponsePrivate(
    DeleteInstanceAccessControlAttributeConfigurationResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DeleteInstanceAccessControlAttributeConfiguration response element from \a xml.
 */
void DeleteInstanceAccessControlAttributeConfigurationResponsePrivate::parseDeleteInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceAccessControlAttributeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
