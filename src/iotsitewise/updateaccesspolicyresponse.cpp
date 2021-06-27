/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
    return static_cast<const UpdateAccessPolicyRequest *>(IoTSiteWiseResponse::request());
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
