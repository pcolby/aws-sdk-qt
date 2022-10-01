// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicequotaresponse.h"
#include "getservicequotaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaResponse
 * \brief The GetServiceQuotaResponse class provides an interace for ServiceQuotas GetServiceQuota responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getServiceQuota
 */

/*!
 * Constructs a GetServiceQuotaResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceQuotaResponse::GetServiceQuotaResponse(
        const GetServiceQuotaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new GetServiceQuotaResponsePrivate(this), parent)
{
    setRequest(new GetServiceQuotaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceQuotaRequest * GetServiceQuotaResponse::request() const
{
    Q_D(const GetServiceQuotaResponse);
    return static_cast<const GetServiceQuotaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas GetServiceQuota \a response.
 */
void GetServiceQuotaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceQuotaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaResponsePrivate
 * \brief The GetServiceQuotaResponsePrivate class provides private implementation for GetServiceQuotaResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetServiceQuotaResponsePrivate object with public implementation \a q.
 */
GetServiceQuotaResponsePrivate::GetServiceQuotaResponsePrivate(
    GetServiceQuotaResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas GetServiceQuota response element from \a xml.
 */
void GetServiceQuotaResponsePrivate::parseGetServiceQuotaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceQuotaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
