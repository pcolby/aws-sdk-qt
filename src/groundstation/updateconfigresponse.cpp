// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigresponse.h"
#include "updateconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::UpdateConfigResponse
 * \brief The UpdateConfigResponse class provides an interace for GroundStation UpdateConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::updateConfig
 */

/*!
 * Constructs a UpdateConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigResponse::UpdateConfigResponse(
        const UpdateConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new UpdateConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigRequest * UpdateConfigResponse::request() const
{
    Q_D(const UpdateConfigResponse);
    return static_cast<const UpdateConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation UpdateConfig \a response.
 */
void UpdateConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::UpdateConfigResponsePrivate
 * \brief The UpdateConfigResponsePrivate class provides private implementation for UpdateConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a UpdateConfigResponsePrivate object with public implementation \a q.
 */
UpdateConfigResponsePrivate::UpdateConfigResponsePrivate(
    UpdateConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation UpdateConfig response element from \a xml.
 */
void UpdateConfigResponsePrivate::parseUpdateConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
