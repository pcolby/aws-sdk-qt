// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecoverygroupresponse.h"
#include "deleterecoverygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteRecoveryGroupResponse
 * \brief The DeleteRecoveryGroupResponse class provides an interace for Route53RecoveryReadiness DeleteRecoveryGroup responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteRecoveryGroup
 */

/*!
 * Constructs a DeleteRecoveryGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecoveryGroupResponse::DeleteRecoveryGroupResponse(
        const DeleteRecoveryGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteRecoveryGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteRecoveryGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecoveryGroupRequest * DeleteRecoveryGroupResponse::request() const
{
    Q_D(const DeleteRecoveryGroupResponse);
    return static_cast<const DeleteRecoveryGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteRecoveryGroup \a response.
 */
void DeleteRecoveryGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecoveryGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteRecoveryGroupResponsePrivate
 * \brief The DeleteRecoveryGroupResponsePrivate class provides private implementation for DeleteRecoveryGroupResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteRecoveryGroupResponsePrivate object with public implementation \a q.
 */
DeleteRecoveryGroupResponsePrivate::DeleteRecoveryGroupResponsePrivate(
    DeleteRecoveryGroupResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteRecoveryGroup response element from \a xml.
 */
void DeleteRecoveryGroupResponsePrivate::parseDeleteRecoveryGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecoveryGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
