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

#include "listservicequotaincreaserequestsintemplateresponse.h"
#include "listservicequotaincreaserequestsintemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotaIncreaseRequestsInTemplateResponse
 * \brief The ListServiceQuotaIncreaseRequestsInTemplateResponse class provides an interace for ServiceQuotas ListServiceQuotaIncreaseRequestsInTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServiceQuotaIncreaseRequestsInTemplate
 */

/*!
 * Constructs a ListServiceQuotaIncreaseRequestsInTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
ListServiceQuotaIncreaseRequestsInTemplateResponse::ListServiceQuotaIncreaseRequestsInTemplateResponse(
        const ListServiceQuotaIncreaseRequestsInTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate(this), parent)
{
    setRequest(new ListServiceQuotaIncreaseRequestsInTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServiceQuotaIncreaseRequestsInTemplateRequest * ListServiceQuotaIncreaseRequestsInTemplateResponse::request() const
{
    Q_D(const ListServiceQuotaIncreaseRequestsInTemplateResponse);
    return static_cast<const ListServiceQuotaIncreaseRequestsInTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas ListServiceQuotaIncreaseRequestsInTemplate \a response.
 */
void ListServiceQuotaIncreaseRequestsInTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServiceQuotaIncreaseRequestsInTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate
 * \brief The ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate class provides private implementation for ListServiceQuotaIncreaseRequestsInTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate object with public implementation \a q.
 */
ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate::ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate(
    ListServiceQuotaIncreaseRequestsInTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas ListServiceQuotaIncreaseRequestsInTemplate response element from \a xml.
 */
void ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate::parseListServiceQuotaIncreaseRequestsInTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceQuotaIncreaseRequestsInTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
