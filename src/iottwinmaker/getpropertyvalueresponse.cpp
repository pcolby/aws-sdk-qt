// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpropertyvalueresponse.h"
#include "getpropertyvalueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueResponse
 * \brief The GetPropertyValueResponse class provides an interace for IoTTwinMaker GetPropertyValue responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getPropertyValue
 */

/*!
 * Constructs a GetPropertyValueResponse object for \a reply to \a request, with parent \a parent.
 */
GetPropertyValueResponse::GetPropertyValueResponse(
        const GetPropertyValueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetPropertyValueResponsePrivate(this), parent)
{
    setRequest(new GetPropertyValueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPropertyValueRequest * GetPropertyValueResponse::request() const
{
    Q_D(const GetPropertyValueResponse);
    return static_cast<const GetPropertyValueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetPropertyValue \a response.
 */
void GetPropertyValueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPropertyValueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueResponsePrivate
 * \brief The GetPropertyValueResponsePrivate class provides private implementation for GetPropertyValueResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetPropertyValueResponsePrivate object with public implementation \a q.
 */
GetPropertyValueResponsePrivate::GetPropertyValueResponsePrivate(
    GetPropertyValueResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetPropertyValue response element from \a xml.
 */
void GetPropertyValueResponsePrivate::parseGetPropertyValueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPropertyValueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
