// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getawsdefaultservicequotaresponse.h"
#include "getawsdefaultservicequotaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetAWSDefaultServiceQuotaResponse
 * \brief The GetAWSDefaultServiceQuotaResponse class provides an interace for ServiceQuotas GetAWSDefaultServiceQuota responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getAWSDefaultServiceQuota
 */

/*!
 * Constructs a GetAWSDefaultServiceQuotaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAWSDefaultServiceQuotaResponse::GetAWSDefaultServiceQuotaResponse(
        const GetAWSDefaultServiceQuotaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new GetAWSDefaultServiceQuotaResponsePrivate(this), parent)
{
    setRequest(new GetAWSDefaultServiceQuotaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAWSDefaultServiceQuotaRequest * GetAWSDefaultServiceQuotaResponse::request() const
{
    Q_D(const GetAWSDefaultServiceQuotaResponse);
    return static_cast<const GetAWSDefaultServiceQuotaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas GetAWSDefaultServiceQuota \a response.
 */
void GetAWSDefaultServiceQuotaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAWSDefaultServiceQuotaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::GetAWSDefaultServiceQuotaResponsePrivate
 * \brief The GetAWSDefaultServiceQuotaResponsePrivate class provides private implementation for GetAWSDefaultServiceQuotaResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetAWSDefaultServiceQuotaResponsePrivate object with public implementation \a q.
 */
GetAWSDefaultServiceQuotaResponsePrivate::GetAWSDefaultServiceQuotaResponsePrivate(
    GetAWSDefaultServiceQuotaResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas GetAWSDefaultServiceQuota response element from \a xml.
 */
void GetAWSDefaultServiceQuotaResponsePrivate::parseGetAWSDefaultServiceQuotaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAWSDefaultServiceQuotaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
