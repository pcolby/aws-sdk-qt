// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
