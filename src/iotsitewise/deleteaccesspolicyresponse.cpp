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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
    return static_cast<const DeleteAccessPolicyRequest *>(IoTSiteWiseResponse::request());
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
