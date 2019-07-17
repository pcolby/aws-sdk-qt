/*
    Copyright 2013-2019 Paul Colby

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

#include "gettrafficpolicyresponse.h"
#include "gettrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyResponse
 * \brief The GetTrafficPolicyResponse class provides an interace for Route53 GetTrafficPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicy
 */

/*!
 * Constructs a GetTrafficPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrafficPolicyResponse::GetTrafficPolicyResponse(
        const GetTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrafficPolicyRequest * GetTrafficPolicyResponse::request() const
{
    Q_D(const GetTrafficPolicyResponse);
    return static_cast<const GetTrafficPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetTrafficPolicy \a response.
 */
void GetTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyResponsePrivate
 * \brief The GetTrafficPolicyResponsePrivate class provides private implementation for GetTrafficPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyResponsePrivate object with public implementation \a q.
 */
GetTrafficPolicyResponsePrivate::GetTrafficPolicyResponsePrivate(
    GetTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetTrafficPolicy response element from \a xml.
 */
void GetTrafficPolicyResponsePrivate::parseGetTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
