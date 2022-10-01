// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesresponse.h"
#include "listworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListWorkspacesResponse
 * \brief The ListWorkspacesResponse class provides an interace for IoTTwinMaker ListWorkspaces responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listWorkspaces
 */

/*!
 * Constructs a ListWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkspacesResponse::ListWorkspacesResponse(
        const ListWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new ListWorkspacesResponsePrivate(this), parent)
{
    setRequest(new ListWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkspacesRequest * ListWorkspacesResponse::request() const
{
    Q_D(const ListWorkspacesResponse);
    return static_cast<const ListWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker ListWorkspaces \a response.
 */
void ListWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::ListWorkspacesResponsePrivate
 * \brief The ListWorkspacesResponsePrivate class provides private implementation for ListWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListWorkspacesResponsePrivate object with public implementation \a q.
 */
ListWorkspacesResponsePrivate::ListWorkspacesResponsePrivate(
    ListWorkspacesResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker ListWorkspaces response element from \a xml.
 */
void ListWorkspacesResponsePrivate::parseListWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
