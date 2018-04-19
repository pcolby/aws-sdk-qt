/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatetrafficpolicyinstanceresponse.h"
#include "updatetrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceResponse
 * \brief The UpdateTrafficPolicyInstanceResponse class provides an interace for Route53 UpdateTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::updateTrafficPolicyInstance
 */

/*!
 * Constructs a UpdateTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrafficPolicyInstanceResponse::UpdateTrafficPolicyInstanceResponse(
        const UpdateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrafficPolicyInstanceRequest * UpdateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const UpdateTrafficPolicyInstanceResponse);
    return static_cast<const UpdateTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 UpdateTrafficPolicyInstance \a response.
 */
void UpdateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceResponsePrivate
 * \brief The UpdateTrafficPolicyInstanceResponsePrivate class provides private implementation for UpdateTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
UpdateTrafficPolicyInstanceResponsePrivate::UpdateTrafficPolicyInstanceResponsePrivate(
    UpdateTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 UpdateTrafficPolicyInstance response element from \a xml.
 */
void UpdateTrafficPolicyInstanceResponsePrivate::parseUpdateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrafficPolicyInstanceResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
