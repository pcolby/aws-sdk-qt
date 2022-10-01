// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
