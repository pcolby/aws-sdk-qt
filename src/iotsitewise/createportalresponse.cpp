// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportalresponse.h"
#include "createportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreatePortalResponse
 * \brief The CreatePortalResponse class provides an interace for IoTSiteWise CreatePortal responses.
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
 * \sa IoTSiteWiseClient::createPortal
 */

/*!
 * Constructs a CreatePortalResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePortalResponse::CreatePortalResponse(
        const CreatePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreatePortalResponsePrivate(this), parent)
{
    setRequest(new CreatePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePortalRequest * CreatePortalResponse::request() const
{
    Q_D(const CreatePortalResponse);
    return static_cast<const CreatePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreatePortal \a response.
 */
void CreatePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreatePortalResponsePrivate
 * \brief The CreatePortalResponsePrivate class provides private implementation for CreatePortalResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreatePortalResponsePrivate object with public implementation \a q.
 */
CreatePortalResponsePrivate::CreatePortalResponsePrivate(
    CreatePortalResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreatePortal response element from \a xml.
 */
void CreatePortalResponsePrivate::parseCreatePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
