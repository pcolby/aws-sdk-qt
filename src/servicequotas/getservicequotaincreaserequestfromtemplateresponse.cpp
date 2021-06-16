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

#include "getservicequotaincreaserequestfromtemplateresponse.h"
#include "getservicequotaincreaserequestfromtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaIncreaseRequestFromTemplateResponse
 * \brief The GetServiceQuotaIncreaseRequestFromTemplateResponse class provides an interace for ServiceQuotas GetServiceQuotaIncreaseRequestFromTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getServiceQuotaIncreaseRequestFromTemplate
 */

/*!
 * Constructs a GetServiceQuotaIncreaseRequestFromTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceQuotaIncreaseRequestFromTemplateResponse::GetServiceQuotaIncreaseRequestFromTemplateResponse(
        const GetServiceQuotaIncreaseRequestFromTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate(this), parent)
{
    setRequest(new GetServiceQuotaIncreaseRequestFromTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceQuotaIncreaseRequestFromTemplateRequest * GetServiceQuotaIncreaseRequestFromTemplateResponse::request() const
{
    Q_D(const GetServiceQuotaIncreaseRequestFromTemplateResponse);
    return static_cast<const GetServiceQuotaIncreaseRequestFromTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas GetServiceQuotaIncreaseRequestFromTemplate \a response.
 */
void GetServiceQuotaIncreaseRequestFromTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceQuotaIncreaseRequestFromTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate
 * \brief The GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate class provides private implementation for GetServiceQuotaIncreaseRequestFromTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate object with public implementation \a q.
 */
GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate::GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate(
    GetServiceQuotaIncreaseRequestFromTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas GetServiceQuotaIncreaseRequestFromTemplate response element from \a xml.
 */
void GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate::parseGetServiceQuotaIncreaseRequestFromTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceQuotaIncreaseRequestFromTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
