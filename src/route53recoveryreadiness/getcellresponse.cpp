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

#include "getcellresponse.h"
#include "getcellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellResponse
 * \brief The GetCellResponse class provides an interace for Route53RecoveryReadiness GetCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCell
 */

/*!
 * Constructs a GetCellResponse object for \a reply to \a request, with parent \a parent.
 */
GetCellResponse::GetCellResponse(
        const GetCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetCellResponsePrivate(this), parent)
{
    setRequest(new GetCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCellRequest * GetCellResponse::request() const
{
    Q_D(const GetCellResponse);
    return static_cast<const GetCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetCell \a response.
 */
void GetCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellResponsePrivate
 * \brief The GetCellResponsePrivate class provides private implementation for GetCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellResponsePrivate object with public implementation \a q.
 */
GetCellResponsePrivate::GetCellResponsePrivate(
    GetCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetCell response element from \a xml.
 */
void GetCellResponsePrivate::parseGetCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
