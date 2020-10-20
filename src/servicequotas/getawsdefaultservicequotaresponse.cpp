/*
    Copyright 2013-2020 Paul Colby

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
