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

#include "deletetrafficpolicyresponse.h"
#include "deletetrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyResponse
 * \brief The DeleteTrafficPolicyResponse class provides an interace for Route53 DeleteTrafficPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteTrafficPolicy
 */

/*!
 * Constructs a DeleteTrafficPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrafficPolicyResponse::DeleteTrafficPolicyResponse(
        const DeleteTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteTrafficPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrafficPolicyRequest * DeleteTrafficPolicyResponse::request() const
{
    Q_D(const DeleteTrafficPolicyResponse);
    return static_cast<const DeleteTrafficPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteTrafficPolicy \a response.
 */
void DeleteTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyResponsePrivate
 * \brief The DeleteTrafficPolicyResponsePrivate class provides private implementation for DeleteTrafficPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteTrafficPolicyResponsePrivate object with public implementation \a q.
 */
DeleteTrafficPolicyResponsePrivate::DeleteTrafficPolicyResponsePrivate(
    DeleteTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteTrafficPolicy response element from \a xml.
 */
void DeleteTrafficPolicyResponsePrivate::parseDeleteTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrafficPolicyResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
