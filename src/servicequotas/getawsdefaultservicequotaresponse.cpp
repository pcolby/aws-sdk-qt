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
    return static_cast<const GetAWSDefaultServiceQuotaRequest *>(ServiceQuotasResponse::request());
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
