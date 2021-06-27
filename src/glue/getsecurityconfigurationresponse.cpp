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

#include "getsecurityconfigurationresponse.h"
#include "getsecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationResponse
 * \brief The GetSecurityConfigurationResponse class provides an interace for Glue GetSecurityConfiguration responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSecurityConfiguration
 */

/*!
 * Constructs a GetSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetSecurityConfigurationResponse::GetSecurityConfigurationResponse(
        const GetSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSecurityConfigurationRequest * GetSecurityConfigurationResponse::request() const
{
    return static_cast<const GetSecurityConfigurationRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetSecurityConfiguration \a response.
 */
void GetSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationResponsePrivate
 * \brief The GetSecurityConfigurationResponsePrivate class provides private implementation for GetSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
GetSecurityConfigurationResponsePrivate::GetSecurityConfigurationResponsePrivate(
    GetSecurityConfigurationResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSecurityConfiguration response element from \a xml.
 */
void GetSecurityConfigurationResponsePrivate::parseGetSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
