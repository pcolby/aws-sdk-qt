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

#include "deletecellresponse.h"
#include "deletecellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellResponse
 * \brief The DeleteCellResponse class provides an interace for Route53RecoveryReadiness DeleteCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCell
 */

/*!
 * Constructs a DeleteCellResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCellResponse::DeleteCellResponse(
        const DeleteCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteCellResponsePrivate(this), parent)
{
    setRequest(new DeleteCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCellRequest * DeleteCellResponse::request() const
{
    Q_D(const DeleteCellResponse);
    return static_cast<const DeleteCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteCell \a response.
 */
void DeleteCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellResponsePrivate
 * \brief The DeleteCellResponsePrivate class provides private implementation for DeleteCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCellResponsePrivate object with public implementation \a q.
 */
DeleteCellResponsePrivate::DeleteCellResponsePrivate(
    DeleteCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteCell response element from \a xml.
 */
void DeleteCellResponsePrivate::parseDeleteCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
