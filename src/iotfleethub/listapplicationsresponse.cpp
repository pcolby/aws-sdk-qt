// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationsresponse.h"
#include "listapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::ListApplicationsResponse
 * \brief The ListApplicationsResponse class provides an interace for IoTFleetHub ListApplications responses.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::listApplications
 */

/*!
 * Constructs a ListApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationsResponse::ListApplicationsResponse(
        const ListApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTFleetHubResponse(new ListApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationsRequest * ListApplicationsResponse::request() const
{
    Q_D(const ListApplicationsResponse);
    return static_cast<const ListApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTFleetHub ListApplications \a response.
 */
void ListApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTFleetHub::ListApplicationsResponsePrivate
 * \brief The ListApplicationsResponsePrivate class provides private implementation for ListApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a ListApplicationsResponsePrivate object with public implementation \a q.
 */
ListApplicationsResponsePrivate::ListApplicationsResponsePrivate(
    ListApplicationsResponse * const q) : IoTFleetHubResponsePrivate(q)
{

}

/*!
 * Parses a IoTFleetHub ListApplications response element from \a xml.
 */
void ListApplicationsResponsePrivate::parseListApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTFleetHub
} // namespace QtAws
