// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspolicyresponse.h"
#include "deleteaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteAccessPolicyResponse
 * \brief The DeleteAccessPolicyResponse class provides an interace for IoTSiteWise DeleteAccessPolicy responses.
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
 * \sa IoTSiteWiseClient::deleteAccessPolicy
 */

/*!
 * Constructs a DeleteAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPolicyResponse::DeleteAccessPolicyResponse(
        const DeleteAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPolicyRequest * DeleteAccessPolicyResponse::request() const
{
    Q_D(const DeleteAccessPolicyResponse);
    return static_cast<const DeleteAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteAccessPolicy \a response.
 */
void DeleteAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteAccessPolicyResponsePrivate
 * \brief The DeleteAccessPolicyResponsePrivate class provides private implementation for DeleteAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteAccessPolicyResponsePrivate object with public implementation \a q.
 */
DeleteAccessPolicyResponsePrivate::DeleteAccessPolicyResponsePrivate(
    DeleteAccessPolicyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteAccessPolicy response element from \a xml.
 */
void DeleteAccessPolicyResponsePrivate::parseDeleteAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
