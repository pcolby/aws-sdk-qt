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

#include "createcellresponse.h"
#include "createcellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCellResponse
 * \brief The CreateCellResponse class provides an interace for Route53RecoveryReadiness CreateCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createCell
 */

/*!
 * Constructs a CreateCellResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCellResponse::CreateCellResponse(
        const CreateCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateCellResponsePrivate(this), parent)
{
    setRequest(new CreateCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCellRequest * CreateCellResponse::request() const
{
    Q_D(const CreateCellResponse);
    return static_cast<const CreateCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateCell \a response.
 */
void CreateCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCellResponsePrivate
 * \brief The CreateCellResponsePrivate class provides private implementation for CreateCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateCellResponsePrivate object with public implementation \a q.
 */
CreateCellResponsePrivate::CreateCellResponsePrivate(
    CreateCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateCell response element from \a xml.
 */
void CreateCellResponsePrivate::parseCreateCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
