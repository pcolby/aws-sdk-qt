// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesresponse.h"
#include "listentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListEntitiesResponse
 * \brief The ListEntitiesResponse class provides an interace for IoTTwinMaker ListEntities responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listEntities
 */

/*!
 * Constructs a ListEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesResponse::ListEntitiesResponse(
        const ListEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new ListEntitiesResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesRequest * ListEntitiesResponse::request() const
{
    Q_D(const ListEntitiesResponse);
    return static_cast<const ListEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker ListEntities \a response.
 */
void ListEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::ListEntitiesResponsePrivate
 * \brief The ListEntitiesResponsePrivate class provides private implementation for ListEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListEntitiesResponsePrivate object with public implementation \a q.
 */
ListEntitiesResponsePrivate::ListEntitiesResponsePrivate(
    ListEntitiesResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker ListEntities response element from \a xml.
 */
void ListEntitiesResponsePrivate::parseListEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
