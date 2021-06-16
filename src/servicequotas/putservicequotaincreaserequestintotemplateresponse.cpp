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

#include "putservicequotaincreaserequestintotemplateresponse.h"
#include "putservicequotaincreaserequestintotemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::PutServiceQuotaIncreaseRequestIntoTemplateResponse
 * \brief The PutServiceQuotaIncreaseRequestIntoTemplateResponse class provides an interace for ServiceQuotas PutServiceQuotaIncreaseRequestIntoTemplate responses.
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
 * \sa ServiceQuotasClient::putServiceQuotaIncreaseRequestIntoTemplate
 */

/*!
 * Constructs a PutServiceQuotaIncreaseRequestIntoTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
PutServiceQuotaIncreaseRequestIntoTemplateResponse::PutServiceQuotaIncreaseRequestIntoTemplateResponse(
        const PutServiceQuotaIncreaseRequestIntoTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate(this), parent)
{
    setRequest(new PutServiceQuotaIncreaseRequestIntoTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutServiceQuotaIncreaseRequestIntoTemplateRequest * PutServiceQuotaIncreaseRequestIntoTemplateResponse::request() const
{
    Q_D(const PutServiceQuotaIncreaseRequestIntoTemplateResponse);
    return static_cast<const PutServiceQuotaIncreaseRequestIntoTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas PutServiceQuotaIncreaseRequestIntoTemplate \a response.
 */
void PutServiceQuotaIncreaseRequestIntoTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutServiceQuotaIncreaseRequestIntoTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate
 * \brief The PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate class provides private implementation for PutServiceQuotaIncreaseRequestIntoTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate object with public implementation \a q.
 */
PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate::PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate(
    PutServiceQuotaIncreaseRequestIntoTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas PutServiceQuotaIncreaseRequestIntoTemplate response element from \a xml.
 */
void PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate::parsePutServiceQuotaIncreaseRequestIntoTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutServiceQuotaIncreaseRequestIntoTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
