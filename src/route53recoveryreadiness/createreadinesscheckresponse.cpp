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

#include "createreadinesscheckresponse.h"
#include "createreadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckResponse
 * \brief The CreateReadinessCheckResponse class provides an interace for Route53RecoveryReadiness CreateReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createReadinessCheck
 */

/*!
 * Constructs a CreateReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReadinessCheckResponse::CreateReadinessCheckResponse(
        const CreateReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new CreateReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReadinessCheckRequest * CreateReadinessCheckResponse::request() const
{
    Q_D(const CreateReadinessCheckResponse);
    return static_cast<const CreateReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateReadinessCheck \a response.
 */
void CreateReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateReadinessCheckResponsePrivate
 * \brief The CreateReadinessCheckResponsePrivate class provides private implementation for CreateReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateReadinessCheckResponsePrivate object with public implementation \a q.
 */
CreateReadinessCheckResponsePrivate::CreateReadinessCheckResponsePrivate(
    CreateReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateReadinessCheck response element from \a xml.
 */
void CreateReadinessCheckResponsePrivate::parseCreateReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
