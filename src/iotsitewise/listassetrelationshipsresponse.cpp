// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetrelationshipsresponse.h"
#include "listassetrelationshipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssetRelationshipsResponse
 * \brief The ListAssetRelationshipsResponse class provides an interace for IoTSiteWise ListAssetRelationships responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::listAssetRelationships
 */

/*!
 * Constructs a ListAssetRelationshipsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssetRelationshipsResponse::ListAssetRelationshipsResponse(
        const ListAssetRelationshipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListAssetRelationshipsResponsePrivate(this), parent)
{
    setRequest(new ListAssetRelationshipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssetRelationshipsRequest * ListAssetRelationshipsResponse::request() const
{
    Q_D(const ListAssetRelationshipsResponse);
    return static_cast<const ListAssetRelationshipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListAssetRelationships \a response.
 */
void ListAssetRelationshipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssetRelationshipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListAssetRelationshipsResponsePrivate
 * \brief The ListAssetRelationshipsResponsePrivate class provides private implementation for ListAssetRelationshipsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssetRelationshipsResponsePrivate object with public implementation \a q.
 */
ListAssetRelationshipsResponsePrivate::ListAssetRelationshipsResponsePrivate(
    ListAssetRelationshipsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListAssetRelationships response element from \a xml.
 */
void ListAssetRelationshipsResponsePrivate::parseListAssetRelationshipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssetRelationshipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
