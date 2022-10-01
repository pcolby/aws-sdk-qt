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

#include "updateresourcesetresponse.h"
#include "updateresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetResponse
 * \brief The UpdateResourceSetResponse class provides an interace for Route53RecoveryReadiness UpdateResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateResourceSet
 */

/*!
 * Constructs a UpdateResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceSetResponse::UpdateResourceSetResponse(
        const UpdateResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateResourceSetResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceSetRequest * UpdateResourceSetResponse::request() const
{
    Q_D(const UpdateResourceSetResponse);
    return static_cast<const UpdateResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateResourceSet \a response.
 */
void UpdateResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetResponsePrivate
 * \brief The UpdateResourceSetResponsePrivate class provides private implementation for UpdateResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateResourceSetResponsePrivate object with public implementation \a q.
 */
UpdateResourceSetResponsePrivate::UpdateResourceSetResponsePrivate(
    UpdateResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateResourceSet response element from \a xml.
 */
void UpdateResourceSetResponsePrivate::parseUpdateResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
