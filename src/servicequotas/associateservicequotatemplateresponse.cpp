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

#include "associateservicequotatemplateresponse.h"
#include "associateservicequotatemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::AssociateServiceQuotaTemplateResponse
 * \brief The AssociateServiceQuotaTemplateResponse class provides an interace for ServiceQuotas AssociateServiceQuotaTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::associateServiceQuotaTemplate
 */

/*!
 * Constructs a AssociateServiceQuotaTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateServiceQuotaTemplateResponse::AssociateServiceQuotaTemplateResponse(
        const AssociateServiceQuotaTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new AssociateServiceQuotaTemplateResponsePrivate(this), parent)
{
    setRequest(new AssociateServiceQuotaTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateServiceQuotaTemplateRequest * AssociateServiceQuotaTemplateResponse::request() const
{
    Q_D(const AssociateServiceQuotaTemplateResponse);
    return static_cast<const AssociateServiceQuotaTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas AssociateServiceQuotaTemplate \a response.
 */
void AssociateServiceQuotaTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateServiceQuotaTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::AssociateServiceQuotaTemplateResponsePrivate
 * \brief The AssociateServiceQuotaTemplateResponsePrivate class provides private implementation for AssociateServiceQuotaTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a AssociateServiceQuotaTemplateResponsePrivate object with public implementation \a q.
 */
AssociateServiceQuotaTemplateResponsePrivate::AssociateServiceQuotaTemplateResponsePrivate(
    AssociateServiceQuotaTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas AssociateServiceQuotaTemplate response element from \a xml.
 */
void AssociateServiceQuotaTemplateResponsePrivate::parseAssociateServiceQuotaTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateServiceQuotaTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
