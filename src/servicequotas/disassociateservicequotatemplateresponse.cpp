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
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
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
