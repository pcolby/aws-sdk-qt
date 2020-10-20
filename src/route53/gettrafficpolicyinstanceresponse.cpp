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

#include "gettrafficpolicyinstanceresponse.h"
#include "gettrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceResponse
 * \brief The GetTrafficPolicyInstanceResponse class provides an interace for Route53 GetTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicyInstance
 */

/*!
 * Constructs a GetTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrafficPolicyInstanceResponse::GetTrafficPolicyInstanceResponse(
        const GetTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrafficPolicyInstanceRequest * GetTrafficPolicyInstanceResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceResponse);
    return static_cast<const GetTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetTrafficPolicyInstance \a response.
 */
void GetTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceResponsePrivate
 * \brief The GetTrafficPolicyInstanceResponsePrivate class provides private implementation for GetTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
GetTrafficPolicyInstanceResponsePrivate::GetTrafficPolicyInstanceResponsePrivate(
    GetTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetTrafficPolicyInstance response element from \a xml.
 */
void GetTrafficPolicyInstanceResponsePrivate::parseGetTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
