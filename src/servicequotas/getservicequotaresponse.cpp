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
 *  Service Quotas is a web service that you can use to manage many of your AWS service quotas. Quotas, also referred to as
 *  limits, are the maximum values for a resource, item, or operation. This guide provide descriptions of the Service Quotas
 *  actions that you can call from an API. For the Service Quotas user guide, which explains how to use Service Quotas from
 *  the console, see <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What is Service
 *  Quotas</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for programming languages and platforms (Java, Ruby, .NET,
 *  iOS, Android, etc...,). The SDKs provide a convenient way to create programmatic access to Service Quotas and AWS. For
 *  information about the AWS SDKs, including how to download and install them, see the <a
 *  href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web Services</a>
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
