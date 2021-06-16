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

#include "createconfigresponse.h"
#include "createconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateConfigResponse
 * \brief The CreateConfigResponse class provides an interace for GroundStation CreateConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createConfig
 */

/*!
 * Constructs a CreateConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigResponse::CreateConfigResponse(
        const CreateConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CreateConfigResponsePrivate(this), parent)
{
    setRequest(new CreateConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigRequest * CreateConfigResponse::request() const
{
    Q_D(const CreateConfigResponse);
    return static_cast<const CreateConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CreateConfig \a response.
 */
void CreateConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CreateConfigResponsePrivate
 * \brief The CreateConfigResponsePrivate class provides private implementation for CreateConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateConfigResponsePrivate object with public implementation \a q.
 */
CreateConfigResponsePrivate::CreateConfigResponsePrivate(
    CreateConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CreateConfig response element from \a xml.
 */
void CreateConfigResponsePrivate::parseCreateConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
