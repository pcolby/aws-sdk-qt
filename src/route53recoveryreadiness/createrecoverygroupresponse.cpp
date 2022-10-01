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

#include "createrecoverygroupresponse.h"
#include "createrecoverygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateRecoveryGroupResponse
 * \brief The CreateRecoveryGroupResponse class provides an interace for Route53RecoveryReadiness CreateRecoveryGroup responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createRecoveryGroup
 */

/*!
 * Constructs a CreateRecoveryGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecoveryGroupResponse::CreateRecoveryGroupResponse(
        const CreateRecoveryGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateRecoveryGroupResponsePrivate(this), parent)
{
    setRequest(new CreateRecoveryGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecoveryGroupRequest * CreateRecoveryGroupResponse::request() const
{
    Q_D(const CreateRecoveryGroupResponse);
    return static_cast<const CreateRecoveryGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateRecoveryGroup \a response.
 */
void CreateRecoveryGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecoveryGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateRecoveryGroupResponsePrivate
 * \brief The CreateRecoveryGroupResponsePrivate class provides private implementation for CreateRecoveryGroupResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateRecoveryGroupResponsePrivate object with public implementation \a q.
 */
CreateRecoveryGroupResponsePrivate::CreateRecoveryGroupResponsePrivate(
    CreateRecoveryGroupResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateRecoveryGroup response element from \a xml.
 */
void CreateRecoveryGroupResponsePrivate::parseCreateRecoveryGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecoveryGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
