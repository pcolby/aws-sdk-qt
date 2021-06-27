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

#include "listrequestedservicequotachangehistorybyquotaresponse.h"
#include "listrequestedservicequotachangehistorybyquotaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryByQuotaResponse
 * \brief The ListRequestedServiceQuotaChangeHistoryByQuotaResponse class provides an interace for ServiceQuotas ListRequestedServiceQuotaChangeHistoryByQuota responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listRequestedServiceQuotaChangeHistoryByQuota
 */

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryByQuotaResponse object for \a reply to \a request, with parent \a parent.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaResponse::ListRequestedServiceQuotaChangeHistoryByQuotaResponse(
        const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate(this), parent)
{
    setRequest(new ListRequestedServiceQuotaChangeHistoryByQuotaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRequestedServiceQuotaChangeHistoryByQuotaRequest * ListRequestedServiceQuotaChangeHistoryByQuotaResponse::request() const
{
    return static_cast<const ListRequestedServiceQuotaChangeHistoryByQuotaRequest *>(ServiceQuotasResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas ListRequestedServiceQuotaChangeHistoryByQuota \a response.
 */
void ListRequestedServiceQuotaChangeHistoryByQuotaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRequestedServiceQuotaChangeHistoryByQuotaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate
 * \brief The ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate class provides private implementation for ListRequestedServiceQuotaChangeHistoryByQuotaResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate object with public implementation \a q.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate::ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate(
    ListRequestedServiceQuotaChangeHistoryByQuotaResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas ListRequestedServiceQuotaChangeHistoryByQuota response element from \a xml.
 */
void ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate::parseListRequestedServiceQuotaChangeHistoryByQuotaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRequestedServiceQuotaChangeHistoryByQuotaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
