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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
    return static_cast<const CreateAccessPolicyRequest *>(IoTSiteWiseResponse::request());
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
