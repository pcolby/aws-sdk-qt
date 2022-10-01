// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceidentifiersresponse.h"
#include "listdeviceidentifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersResponse
 * \brief The ListDeviceIdentifiersResponse class provides an interace for PrivateNetworks ListDeviceIdentifiers responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listDeviceIdentifiers
 */

/*!
 * Constructs a ListDeviceIdentifiersResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceIdentifiersResponse::ListDeviceIdentifiersResponse(
        const ListDeviceIdentifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListDeviceIdentifiersResponsePrivate(this), parent)
{
    setRequest(new ListDeviceIdentifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceIdentifiersRequest * ListDeviceIdentifiersResponse::request() const
{
    Q_D(const ListDeviceIdentifiersResponse);
    return static_cast<const ListDeviceIdentifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ListDeviceIdentifiers \a response.
 */
void ListDeviceIdentifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceIdentifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersResponsePrivate
 * \brief The ListDeviceIdentifiersResponsePrivate class provides private implementation for ListDeviceIdentifiersResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListDeviceIdentifiersResponsePrivate object with public implementation \a q.
 */
ListDeviceIdentifiersResponsePrivate::ListDeviceIdentifiersResponsePrivate(
    ListDeviceIdentifiersResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListDeviceIdentifiers response element from \a xml.
 */
void ListDeviceIdentifiersResponsePrivate::parseListDeviceIdentifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceIdentifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
