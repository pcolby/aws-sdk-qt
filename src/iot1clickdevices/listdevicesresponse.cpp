// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ListDevicesResponse
 * \brief The ListDevicesResponse class provides an interace for IoT1ClickDevices ListDevices responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::listDevices
 */

/*!
 * Constructs a ListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices ListDevices \a response.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::ListDevicesResponsePrivate
 * \brief The ListDevicesResponsePrivate class provides private implementation for ListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ListDevicesResponsePrivate object with public implementation \a q.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices ListDevices response element from \a xml.
 */
void ListDevicesResponsePrivate::parseListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
