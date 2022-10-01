// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdataflowendpointgroupresponse.h"
#include "createdataflowendpointgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupResponse
 * \brief The CreateDataflowEndpointGroupResponse class provides an interace for GroundStation CreateDataflowEndpointGroup responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createDataflowEndpointGroup
 */

/*!
 * Constructs a CreateDataflowEndpointGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataflowEndpointGroupResponse::CreateDataflowEndpointGroupResponse(
        const CreateDataflowEndpointGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CreateDataflowEndpointGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDataflowEndpointGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataflowEndpointGroupRequest * CreateDataflowEndpointGroupResponse::request() const
{
    Q_D(const CreateDataflowEndpointGroupResponse);
    return static_cast<const CreateDataflowEndpointGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CreateDataflowEndpointGroup \a response.
 */
void CreateDataflowEndpointGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataflowEndpointGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupResponsePrivate
 * \brief The CreateDataflowEndpointGroupResponsePrivate class provides private implementation for CreateDataflowEndpointGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateDataflowEndpointGroupResponsePrivate object with public implementation \a q.
 */
CreateDataflowEndpointGroupResponsePrivate::CreateDataflowEndpointGroupResponsePrivate(
    CreateDataflowEndpointGroupResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CreateDataflowEndpointGroup response element from \a xml.
 */
void CreateDataflowEndpointGroupResponsePrivate::parseCreateDataflowEndpointGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataflowEndpointGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
