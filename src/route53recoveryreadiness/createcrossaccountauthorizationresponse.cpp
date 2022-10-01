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
