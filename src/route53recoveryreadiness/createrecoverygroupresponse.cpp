// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
