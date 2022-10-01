// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspolicyresponse.h"
#include "createaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateAccessPolicyResponse
 * \brief The CreateAccessPolicyResponse class provides an interace for IoTSiteWise CreateAccessPolicy responses.
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
 * \sa IoTSiteWiseClient::createAccessPolicy
 */

/*!
 * Constructs a CreateAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPolicyResponse::CreateAccessPolicyResponse(
        const CreateAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreateAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPolicyRequest * CreateAccessPolicyResponse::request() const
{
    Q_D(const CreateAccessPolicyResponse);
    return static_cast<const CreateAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreateAccessPolicy \a response.
 */
void CreateAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreateAccessPolicyResponsePrivate
 * \brief The CreateAccessPolicyResponsePrivate class provides private implementation for CreateAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateAccessPolicyResponsePrivate object with public implementation \a q.
 */
CreateAccessPolicyResponsePrivate::CreateAccessPolicyResponsePrivate(
    CreateAccessPolicyResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreateAccessPolicy response element from \a xml.
 */
void CreateAccessPolicyResponsePrivate::parseCreateAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
