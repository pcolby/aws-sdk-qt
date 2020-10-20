/*
    Copyright 2013-2020 Paul Colby

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

#include "createhostedzoneresponse.h"
#include "createhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHostedZoneResponse
 * \brief The CreateHostedZoneResponse class provides an interace for Route53 CreateHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createHostedZone
 */

/*!
 * Constructs a CreateHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHostedZoneResponse::CreateHostedZoneResponse(
        const CreateHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateHostedZoneResponsePrivate(this), parent)
{
    setRequest(new CreateHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHostedZoneRequest * CreateHostedZoneResponse::request() const
{
    Q_D(const CreateHostedZoneResponse);
    return static_cast<const CreateHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateHostedZone \a response.
 */
void CreateHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateHostedZoneResponsePrivate
 * \brief The CreateHostedZoneResponsePrivate class provides private implementation for CreateHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHostedZoneResponsePrivate object with public implementation \a q.
 */
CreateHostedZoneResponsePrivate::CreateHostedZoneResponsePrivate(
    CreateHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateHostedZone response element from \a xml.
 */
void CreateHostedZoneResponsePrivate::parseCreateHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
