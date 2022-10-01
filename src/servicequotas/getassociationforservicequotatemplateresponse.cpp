// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassociationforservicequotatemplateresponse.h"
#include "getassociationforservicequotatemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetAssociationForServiceQuotaTemplateResponse
 * \brief The GetAssociationForServiceQuotaTemplateResponse class provides an interace for ServiceQuotas GetAssociationForServiceQuotaTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getAssociationForServiceQuotaTemplate
 */

/*!
 * Constructs a GetAssociationForServiceQuotaTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssociationForServiceQuotaTemplateResponse::GetAssociationForServiceQuotaTemplateResponse(
        const GetAssociationForServiceQuotaTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new GetAssociationForServiceQuotaTemplateResponsePrivate(this), parent)
{
    setRequest(new GetAssociationForServiceQuotaTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssociationForServiceQuotaTemplateRequest * GetAssociationForServiceQuotaTemplateResponse::request() const
{
    Q_D(const GetAssociationForServiceQuotaTemplateResponse);
    return static_cast<const GetAssociationForServiceQuotaTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas GetAssociationForServiceQuotaTemplate \a response.
 */
void GetAssociationForServiceQuotaTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssociationForServiceQuotaTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::GetAssociationForServiceQuotaTemplateResponsePrivate
 * \brief The GetAssociationForServiceQuotaTemplateResponsePrivate class provides private implementation for GetAssociationForServiceQuotaTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetAssociationForServiceQuotaTemplateResponsePrivate object with public implementation \a q.
 */
GetAssociationForServiceQuotaTemplateResponsePrivate::GetAssociationForServiceQuotaTemplateResponsePrivate(
    GetAssociationForServiceQuotaTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas GetAssociationForServiceQuotaTemplate response element from \a xml.
 */
void GetAssociationForServiceQuotaTemplateResponsePrivate::parseGetAssociationForServiceQuotaTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssociationForServiceQuotaTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
