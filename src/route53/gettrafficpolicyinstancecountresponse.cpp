/*
    Copyright 2013-2018 Paul Colby

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

#include "gettrafficpolicyinstancecountresponse.h"
#include "gettrafficpolicyinstancecountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountResponse
 * \brief The GetTrafficPolicyInstanceCountResponse class provides an interace for Route53 GetTrafficPolicyInstanceCount responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getTrafficPolicyInstanceCount
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrafficPolicyInstanceCountResponse::GetTrafficPolicyInstanceCountResponse(
        const GetTrafficPolicyInstanceCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceCountResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrafficPolicyInstanceCountRequest * GetTrafficPolicyInstanceCountResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceCountResponse);
    return static_cast<const GetTrafficPolicyInstanceCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetTrafficPolicyInstanceCount \a response.
 */
void GetTrafficPolicyInstanceCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTrafficPolicyInstanceCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountResponsePrivate
 * \brief The GetTrafficPolicyInstanceCountResponsePrivate class provides private implementation for GetTrafficPolicyInstanceCountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountResponsePrivate object with public implementation \a q.
 */
GetTrafficPolicyInstanceCountResponsePrivate::GetTrafficPolicyInstanceCountResponsePrivate(
    GetTrafficPolicyInstanceCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetTrafficPolicyInstanceCount response element from \a xml.
 */
void GetTrafficPolicyInstanceCountResponsePrivate::parseGetTrafficPolicyInstanceCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceCountResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
