// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateassetsresponse.h"
#include "disassociateassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DisassociateAssetsResponse
 * \brief The DisassociateAssetsResponse class provides an interace for IoTSiteWise DisassociateAssets responses.
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
 * \sa IoTSiteWiseClient::disassociateAssets
 */

/*!
 * Constructs a DisassociateAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAssetsResponse::DisassociateAssetsResponse(
        const DisassociateAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DisassociateAssetsResponsePrivate(this), parent)
{
    setRequest(new DisassociateAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAssetsRequest * DisassociateAssetsResponse::request() const
{
    Q_D(const DisassociateAssetsResponse);
    return static_cast<const DisassociateAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DisassociateAssets \a response.
 */
void DisassociateAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DisassociateAssetsResponsePrivate
 * \brief The DisassociateAssetsResponsePrivate class provides private implementation for DisassociateAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DisassociateAssetsResponsePrivate object with public implementation \a q.
 */
DisassociateAssetsResponsePrivate::DisassociateAssetsResponsePrivate(
    DisassociateAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DisassociateAssets response element from \a xml.
 */
void DisassociateAssetsResponsePrivate::parseDisassociateAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
