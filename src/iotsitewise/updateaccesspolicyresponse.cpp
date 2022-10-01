// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesspolicyresponse.h"
#include "updateaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAccessPolicyResponse
 * \brief The UpdateAccessPolicyResponse class provides an interace for IoTSiteWise UpdateAccessPolicy responses.
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
 * \sa IoTSiteWiseClient::updateAccessPolicy
 */

/*!
 * Constructs a UpdateAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessPolicyResponse::UpdateAccessPolicyResponse(
        const UpdateAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessPolicyRequest * UpdateAccessPolicyResponse::request() const
{
    Q_D(const UpdateAccessPolicyResponse);
    return static_cast<const UpdateAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateAccessPolicy \a response.
 */
void UpdateAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAccessPolicyResponsePrivate
 * \brief The UpdateAccessPolicyResponsePrivate class provides private implementation for UpdateAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAccessPolicyResponsePrivate object with public implementation \a q.
 */
UpdateAccessPolicyResponsePrivate::UpdateAccessPolicyResponsePrivate(
    UpdateAccessPolicyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateAccessPolicy response element from \a xml.
 */
void UpdateAccessPolicyResponsePrivate::parseUpdateAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
