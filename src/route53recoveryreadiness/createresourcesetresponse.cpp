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

#include "createresourcesetresponse.h"
#include "createresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetResponse
 * \brief The CreateResourceSetResponse class provides an interace for Route53RecoveryReadiness CreateResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createResourceSet
 */

/*!
 * Constructs a CreateResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceSetResponse::CreateResourceSetResponse(
        const CreateResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateResourceSetResponsePrivate(this), parent)
{
    setRequest(new CreateResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceSetRequest * CreateResourceSetResponse::request() const
{
    Q_D(const CreateResourceSetResponse);
    return static_cast<const CreateResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateResourceSet \a response.
 */
void CreateResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetResponsePrivate
 * \brief The CreateResourceSetResponsePrivate class provides private implementation for CreateResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateResourceSetResponsePrivate object with public implementation \a q.
 */
CreateResourceSetResponsePrivate::CreateResourceSetResponsePrivate(
    CreateResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateResourceSet response element from \a xml.
 */
void CreateResourceSetResponsePrivate::parseCreateResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
