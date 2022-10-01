// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
