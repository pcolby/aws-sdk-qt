// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstalledcomponentsresponse.h"
#include "listinstalledcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsResponse
 * \brief The ListInstalledComponentsResponse class provides an interace for GreengrassV2 ListInstalledComponents responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listInstalledComponents
 */

/*!
 * Constructs a ListInstalledComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstalledComponentsResponse::ListInstalledComponentsResponse(
        const ListInstalledComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListInstalledComponentsResponsePrivate(this), parent)
{
    setRequest(new ListInstalledComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstalledComponentsRequest * ListInstalledComponentsResponse::request() const
{
    Q_D(const ListInstalledComponentsResponse);
    return static_cast<const ListInstalledComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListInstalledComponents \a response.
 */
void ListInstalledComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstalledComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsResponsePrivate
 * \brief The ListInstalledComponentsResponsePrivate class provides private implementation for ListInstalledComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListInstalledComponentsResponsePrivate object with public implementation \a q.
 */
ListInstalledComponentsResponsePrivate::ListInstalledComponentsResponsePrivate(
    ListInstalledComponentsResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListInstalledComponents response element from \a xml.
 */
void ListInstalledComponentsResponsePrivate::parseListInstalledComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstalledComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
