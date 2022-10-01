// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteentityresponse.h"
#include "deleteentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteEntityResponse
 * \brief The DeleteEntityResponse class provides an interace for IoTTwinMaker DeleteEntity responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteEntity
 */

/*!
 * Constructs a DeleteEntityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEntityResponse::DeleteEntityResponse(
        const DeleteEntityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new DeleteEntityResponsePrivate(this), parent)
{
    setRequest(new DeleteEntityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEntityRequest * DeleteEntityResponse::request() const
{
    Q_D(const DeleteEntityResponse);
    return static_cast<const DeleteEntityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker DeleteEntity \a response.
 */
void DeleteEntityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEntityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteEntityResponsePrivate
 * \brief The DeleteEntityResponsePrivate class provides private implementation for DeleteEntityResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteEntityResponsePrivate object with public implementation \a q.
 */
DeleteEntityResponsePrivate::DeleteEntityResponsePrivate(
    DeleteEntityResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker DeleteEntity response element from \a xml.
 */
void DeleteEntityResponsePrivate::parseDeleteEntityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEntityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
