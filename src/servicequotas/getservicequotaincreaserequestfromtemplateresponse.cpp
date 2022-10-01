// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
