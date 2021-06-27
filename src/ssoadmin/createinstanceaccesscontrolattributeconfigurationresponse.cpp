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

#include "createinstanceaccesscontrolattributeconfigurationresponse.h"
#include "createinstanceaccesscontrolattributeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreateInstanceAccessControlAttributeConfigurationResponse
 * \brief The CreateInstanceAccessControlAttributeConfigurationResponse class provides an interace for SSOAdmin CreateInstanceAccessControlAttributeConfiguration responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a CreateInstanceAccessControlAttributeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInstanceAccessControlAttributeConfigurationResponse::CreateInstanceAccessControlAttributeConfigurationResponse(
        const CreateInstanceAccessControlAttributeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new CreateInstanceAccessControlAttributeConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceAccessControlAttributeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInstanceAccessControlAttributeConfigurationRequest * CreateInstanceAccessControlAttributeConfigurationResponse::request() const
{
    return static_cast<const CreateInstanceAccessControlAttributeConfigurationRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin CreateInstanceAccessControlAttributeConfiguration \a response.
 */
void CreateInstanceAccessControlAttributeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInstanceAccessControlAttributeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::CreateInstanceAccessControlAttributeConfigurationResponsePrivate
 * \brief The CreateInstanceAccessControlAttributeConfigurationResponsePrivate class provides private implementation for CreateInstanceAccessControlAttributeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreateInstanceAccessControlAttributeConfigurationResponsePrivate object with public implementation \a q.
 */
CreateInstanceAccessControlAttributeConfigurationResponsePrivate::CreateInstanceAccessControlAttributeConfigurationResponsePrivate(
    CreateInstanceAccessControlAttributeConfigurationResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin CreateInstanceAccessControlAttributeConfiguration response element from \a xml.
 */
void CreateInstanceAccessControlAttributeConfigurationResponsePrivate::parseCreateInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceAccessControlAttributeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
