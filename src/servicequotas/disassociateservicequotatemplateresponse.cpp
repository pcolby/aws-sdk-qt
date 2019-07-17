/*
    Copyright 2013-2019 Paul Colby

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

#include "disassociateservicequotatemplateresponse.h"
#include "disassociateservicequotatemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::DisassociateServiceQuotaTemplateResponse
 * \brief The DisassociateServiceQuotaTemplateResponse class provides an interace for ServiceQuotas DisassociateServiceQuotaTemplate responses.
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
 * \sa ServiceQuotasClient::disassociateServiceQuotaTemplate
 */

/*!
 * Constructs a DisassociateServiceQuotaTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateServiceQuotaTemplateResponse::DisassociateServiceQuotaTemplateResponse(
        const DisassociateServiceQuotaTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new DisassociateServiceQuotaTemplateResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceQuotaTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateServiceQuotaTemplateRequest * DisassociateServiceQuotaTemplateResponse::request() const
{
    Q_D(const DisassociateServiceQuotaTemplateResponse);
    return static_cast<const DisassociateServiceQuotaTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas DisassociateServiceQuotaTemplate \a response.
 */
void DisassociateServiceQuotaTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateServiceQuotaTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::DisassociateServiceQuotaTemplateResponsePrivate
 * \brief The DisassociateServiceQuotaTemplateResponsePrivate class provides private implementation for DisassociateServiceQuotaTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a DisassociateServiceQuotaTemplateResponsePrivate object with public implementation \a q.
 */
DisassociateServiceQuotaTemplateResponsePrivate::DisassociateServiceQuotaTemplateResponsePrivate(
    DisassociateServiceQuotaTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas DisassociateServiceQuotaTemplate response element from \a xml.
 */
void DisassociateServiceQuotaTemplateResponsePrivate::parseDisassociateServiceQuotaTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceQuotaTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
