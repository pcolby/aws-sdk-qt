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

#include "updateorganizationconfigurationresponse.h"
#include "updateorganizationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateOrganizationConfigurationResponse
 * \brief The UpdateOrganizationConfigurationResponse class provides an interace for Inspector2 UpdateOrganizationConfiguration responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateOrganizationConfiguration
 */

/*!
 * Constructs a UpdateOrganizationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOrganizationConfigurationResponse::UpdateOrganizationConfigurationResponse(
        const UpdateOrganizationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new UpdateOrganizationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateOrganizationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOrganizationConfigurationRequest * UpdateOrganizationConfigurationResponse::request() const
{
    Q_D(const UpdateOrganizationConfigurationResponse);
    return static_cast<const UpdateOrganizationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 UpdateOrganizationConfiguration \a response.
 */
void UpdateOrganizationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOrganizationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::UpdateOrganizationConfigurationResponsePrivate
 * \brief The UpdateOrganizationConfigurationResponsePrivate class provides private implementation for UpdateOrganizationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateOrganizationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateOrganizationConfigurationResponsePrivate::UpdateOrganizationConfigurationResponsePrivate(
    UpdateOrganizationConfigurationResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 UpdateOrganizationConfiguration response element from \a xml.
 */
void UpdateOrganizationConfigurationResponsePrivate::parseUpdateOrganizationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOrganizationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
