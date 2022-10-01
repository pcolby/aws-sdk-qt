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

#include "deleteresourcesetresponse.h"
#include "deleteresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetResponse
 * \brief The DeleteResourceSetResponse class provides an interace for Route53RecoveryReadiness DeleteResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteResourceSet
 */

/*!
 * Constructs a DeleteResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceSetResponse::DeleteResourceSetResponse(
        const DeleteResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteResourceSetResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceSetRequest * DeleteResourceSetResponse::request() const
{
    Q_D(const DeleteResourceSetResponse);
    return static_cast<const DeleteResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteResourceSet \a response.
 */
void DeleteResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetResponsePrivate
 * \brief The DeleteResourceSetResponsePrivate class provides private implementation for DeleteResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteResourceSetResponsePrivate object with public implementation \a q.
 */
DeleteResourceSetResponsePrivate::DeleteResourceSetResponsePrivate(
    DeleteResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteResourceSet response element from \a xml.
 */
void DeleteResourceSetResponsePrivate::parseDeleteResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
