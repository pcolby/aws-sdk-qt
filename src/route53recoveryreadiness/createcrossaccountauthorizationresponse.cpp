// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcrossaccountauthorizationresponse.h"
#include "createcrossaccountauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationResponse
 * \brief The CreateCrossAccountAuthorizationResponse class provides an interace for Route53RecoveryReadiness CreateCrossAccountAuthorization responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createCrossAccountAuthorization
 */

/*!
 * Constructs a CreateCrossAccountAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCrossAccountAuthorizationResponse::CreateCrossAccountAuthorizationResponse(
        const CreateCrossAccountAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateCrossAccountAuthorizationResponsePrivate(this), parent)
{
    setRequest(new CreateCrossAccountAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCrossAccountAuthorizationRequest * CreateCrossAccountAuthorizationResponse::request() const
{
    Q_D(const CreateCrossAccountAuthorizationResponse);
    return static_cast<const CreateCrossAccountAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateCrossAccountAuthorization \a response.
 */
void CreateCrossAccountAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCrossAccountAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationResponsePrivate
 * \brief The CreateCrossAccountAuthorizationResponsePrivate class provides private implementation for CreateCrossAccountAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateCrossAccountAuthorizationResponsePrivate object with public implementation \a q.
 */
CreateCrossAccountAuthorizationResponsePrivate::CreateCrossAccountAuthorizationResponsePrivate(
    CreateCrossAccountAuthorizationResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateCrossAccountAuthorization response element from \a xml.
 */
void CreateCrossAccountAuthorizationResponsePrivate::parseCreateCrossAccountAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCrossAccountAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
