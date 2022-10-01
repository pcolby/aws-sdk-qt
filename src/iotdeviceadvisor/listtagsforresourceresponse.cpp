// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourceresponse.h"
#include "listtagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::ListTagsForResourceResponse
 * \brief The ListTagsForResourceResponse class provides an interace for IotDeviceAdvisor ListTagsForResource responses.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::listTagsForResource
 */

/*!
 * Constructs a ListTagsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForResourceResponse::ListTagsForResourceResponse(
        const ListTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IotDeviceAdvisorResponse(new ListTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListTagsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForResourceRequest * ListTagsForResourceResponse::request() const
{
    Q_D(const ListTagsForResourceResponse);
    return static_cast<const ListTagsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IotDeviceAdvisor ListTagsForResource \a response.
 */
void ListTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IotDeviceAdvisor::ListTagsForResourceResponsePrivate
 * \brief The ListTagsForResourceResponsePrivate class provides private implementation for ListTagsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a ListTagsForResourceResponsePrivate object with public implementation \a q.
 */
ListTagsForResourceResponsePrivate::ListTagsForResourceResponsePrivate(
    ListTagsForResourceResponse * const q) : IotDeviceAdvisorResponsePrivate(q)
{

}

/*!
 * Parses a IotDeviceAdvisor ListTagsForResource response element from \a xml.
 */
void ListTagsForResourceResponsePrivate::parseListTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
