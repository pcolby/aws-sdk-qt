// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteportalresponse.h"
#include "deleteportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeletePortalResponse
 * \brief The DeletePortalResponse class provides an interace for IoTSiteWise DeletePortal responses.
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
 * \sa IoTSiteWiseClient::deletePortal
 */

/*!
 * Constructs a DeletePortalResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePortalResponse::DeletePortalResponse(
        const DeletePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeletePortalResponsePrivate(this), parent)
{
    setRequest(new DeletePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePortalRequest * DeletePortalResponse::request() const
{
    Q_D(const DeletePortalResponse);
    return static_cast<const DeletePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeletePortal \a response.
 */
void DeletePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeletePortalResponsePrivate
 * \brief The DeletePortalResponsePrivate class provides private implementation for DeletePortalResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeletePortalResponsePrivate object with public implementation \a q.
 */
DeletePortalResponsePrivate::DeletePortalResponsePrivate(
    DeletePortalResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeletePortal response element from \a xml.
 */
void DeletePortalResponsePrivate::parseDeletePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
