// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicequotaincreaserequestfromtemplateresponse.h"
#include "deleteservicequotaincreaserequestfromtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateResponse
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateResponse class provides an interace for ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::deleteServiceQuotaIncreaseRequestFromTemplate
 */

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateResponse::DeleteServiceQuotaIncreaseRequestFromTemplateResponse(
        const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceQuotaIncreaseRequestFromTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceQuotaIncreaseRequestFromTemplateRequest * DeleteServiceQuotaIncreaseRequestFromTemplateResponse::request() const
{
    Q_D(const DeleteServiceQuotaIncreaseRequestFromTemplateResponse);
    return static_cast<const DeleteServiceQuotaIncreaseRequestFromTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate \a response.
 */
void DeleteServiceQuotaIncreaseRequestFromTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceQuotaIncreaseRequestFromTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate class provides private implementation for DeleteServiceQuotaIncreaseRequestFromTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate object with public implementation \a q.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate::DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate(
    DeleteServiceQuotaIncreaseRequestFromTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate response element from \a xml.
 */
void DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate::parseDeleteServiceQuotaIncreaseRequestFromTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceQuotaIncreaseRequestFromTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
