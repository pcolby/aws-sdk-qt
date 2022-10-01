// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigresponse.h"
#include "deleteconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteConfigResponse
 * \brief The DeleteConfigResponse class provides an interace for GroundStation DeleteConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteConfig
 */

/*!
 * Constructs a DeleteConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigResponse::DeleteConfigResponse(
        const DeleteConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new DeleteConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigRequest * DeleteConfigResponse::request() const
{
    Q_D(const DeleteConfigResponse);
    return static_cast<const DeleteConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation DeleteConfig \a response.
 */
void DeleteConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::DeleteConfigResponsePrivate
 * \brief The DeleteConfigResponsePrivate class provides private implementation for DeleteConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteConfigResponsePrivate object with public implementation \a q.
 */
DeleteConfigResponsePrivate::DeleteConfigResponsePrivate(
    DeleteConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation DeleteConfig response element from \a xml.
 */
void DeleteConfigResponsePrivate::parseDeleteConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
