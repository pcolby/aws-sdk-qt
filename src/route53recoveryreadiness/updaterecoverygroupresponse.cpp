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

#include "updaterecoverygroupresponse.h"
#include "updaterecoverygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupResponse
 * \brief The UpdateRecoveryGroupResponse class provides an interace for Route53RecoveryReadiness UpdateRecoveryGroup responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateRecoveryGroup
 */

/*!
 * Constructs a UpdateRecoveryGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecoveryGroupResponse::UpdateRecoveryGroupResponse(
        const UpdateRecoveryGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateRecoveryGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateRecoveryGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecoveryGroupRequest * UpdateRecoveryGroupResponse::request() const
{
    Q_D(const UpdateRecoveryGroupResponse);
    return static_cast<const UpdateRecoveryGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateRecoveryGroup \a response.
 */
void UpdateRecoveryGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecoveryGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupResponsePrivate
 * \brief The UpdateRecoveryGroupResponsePrivate class provides private implementation for UpdateRecoveryGroupResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateRecoveryGroupResponsePrivate object with public implementation \a q.
 */
UpdateRecoveryGroupResponsePrivate::UpdateRecoveryGroupResponsePrivate(
    UpdateRecoveryGroupResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateRecoveryGroup response element from \a xml.
 */
void UpdateRecoveryGroupResponsePrivate::parseUpdateRecoveryGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecoveryGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
