/*
    Copyright 2013-2020 Paul Colby

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

#include "getsecurityconfigurationsresponse.h"
#include "getsecurityconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsResponse
 * \brief The GetSecurityConfigurationsResponse class provides an interace for Glue GetSecurityConfigurations responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSecurityConfigurations
 */

/*!
 * Constructs a GetSecurityConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSecurityConfigurationsResponse::GetSecurityConfigurationsResponse(
        const GetSecurityConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSecurityConfigurationsResponsePrivate(this), parent)
{
    setRequest(new GetSecurityConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSecurityConfigurationsRequest * GetSecurityConfigurationsResponse::request() const
{
    Q_D(const GetSecurityConfigurationsResponse);
    return static_cast<const GetSecurityConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSecurityConfigurations \a response.
 */
void GetSecurityConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSecurityConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsResponsePrivate
 * \brief The GetSecurityConfigurationsResponsePrivate class provides private implementation for GetSecurityConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationsResponsePrivate object with public implementation \a q.
 */
GetSecurityConfigurationsResponsePrivate::GetSecurityConfigurationsResponsePrivate(
    GetSecurityConfigurationsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSecurityConfigurations response element from \a xml.
 */
void GetSecurityConfigurationsResponsePrivate::parseGetSecurityConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSecurityConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
