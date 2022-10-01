// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
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
