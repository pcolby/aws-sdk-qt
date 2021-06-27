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

#include "getresourcepoliciesresponse.h"
#include "getresourcepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetResourcePoliciesResponse
 * \brief The GetResourcePoliciesResponse class provides an interace for Glue GetResourcePolicies responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getResourcePolicies
 */

/*!
 * Constructs a GetResourcePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcePoliciesResponse::GetResourcePoliciesResponse(
        const GetResourcePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetResourcePoliciesResponsePrivate(this), parent)
{
    setRequest(new GetResourcePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcePoliciesRequest * GetResourcePoliciesResponse::request() const
{
    return static_cast<const GetResourcePoliciesRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetResourcePolicies \a response.
 */
void GetResourcePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetResourcePoliciesResponsePrivate
 * \brief The GetResourcePoliciesResponsePrivate class provides private implementation for GetResourcePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetResourcePoliciesResponsePrivate object with public implementation \a q.
 */
GetResourcePoliciesResponsePrivate::GetResourcePoliciesResponsePrivate(
    GetResourcePoliciesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetResourcePolicies response element from \a xml.
 */
void GetResourcePoliciesResponsePrivate::parseGetResourcePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
