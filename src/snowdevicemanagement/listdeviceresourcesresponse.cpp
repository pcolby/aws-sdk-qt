// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceresourcesresponse.h"
#include "listdeviceresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListDeviceResourcesResponse
 * \brief The ListDeviceResourcesResponse class provides an interace for SnowDeviceManagement ListDeviceResources responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listDeviceResources
 */

/*!
 * Constructs a ListDeviceResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceResourcesResponse::ListDeviceResourcesResponse(
        const ListDeviceResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new ListDeviceResourcesResponsePrivate(this), parent)
{
    setRequest(new ListDeviceResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceResourcesRequest * ListDeviceResourcesResponse::request() const
{
    Q_D(const ListDeviceResourcesResponse);
    return static_cast<const ListDeviceResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SnowDeviceManagement ListDeviceResources \a response.
 */
void ListDeviceResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::ListDeviceResourcesResponsePrivate
 * \brief The ListDeviceResourcesResponsePrivate class provides private implementation for ListDeviceResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListDeviceResourcesResponsePrivate object with public implementation \a q.
 */
ListDeviceResourcesResponsePrivate::ListDeviceResourcesResponsePrivate(
    ListDeviceResourcesResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement ListDeviceResources response element from \a xml.
 */
void ListDeviceResourcesResponsePrivate::parseListDeviceResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
