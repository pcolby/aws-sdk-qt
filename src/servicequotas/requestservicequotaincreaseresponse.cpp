// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "requestservicequotaincreaseresponse.h"
#include "requestservicequotaincreaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::RequestServiceQuotaIncreaseResponse
 * \brief The RequestServiceQuotaIncreaseResponse class provides an interace for ServiceQuotas RequestServiceQuotaIncrease responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::requestServiceQuotaIncrease
 */

/*!
 * Constructs a RequestServiceQuotaIncreaseResponse object for \a reply to \a request, with parent \a parent.
 */
RequestServiceQuotaIncreaseResponse::RequestServiceQuotaIncreaseResponse(
        const RequestServiceQuotaIncreaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new RequestServiceQuotaIncreaseResponsePrivate(this), parent)
{
    setRequest(new RequestServiceQuotaIncreaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RequestServiceQuotaIncreaseRequest * RequestServiceQuotaIncreaseResponse::request() const
{
    Q_D(const RequestServiceQuotaIncreaseResponse);
    return static_cast<const RequestServiceQuotaIncreaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas RequestServiceQuotaIncrease \a response.
 */
void RequestServiceQuotaIncreaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RequestServiceQuotaIncreaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::RequestServiceQuotaIncreaseResponsePrivate
 * \brief The RequestServiceQuotaIncreaseResponsePrivate class provides private implementation for RequestServiceQuotaIncreaseResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a RequestServiceQuotaIncreaseResponsePrivate object with public implementation \a q.
 */
RequestServiceQuotaIncreaseResponsePrivate::RequestServiceQuotaIncreaseResponsePrivate(
    RequestServiceQuotaIncreaseResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas RequestServiceQuotaIncrease response element from \a xml.
 */
void RequestServiceQuotaIncreaseResponsePrivate::parseRequestServiceQuotaIncreaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestServiceQuotaIncreaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
