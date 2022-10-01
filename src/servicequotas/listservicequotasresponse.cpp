// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservicequotasresponse.h"
#include "listservicequotasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotasResponse
 * \brief The ListServiceQuotasResponse class provides an interace for ServiceQuotas ListServiceQuotas responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServiceQuotas
 */

/*!
 * Constructs a ListServiceQuotasResponse object for \a reply to \a request, with parent \a parent.
 */
ListServiceQuotasResponse::ListServiceQuotasResponse(
        const ListServiceQuotasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new ListServiceQuotasResponsePrivate(this), parent)
{
    setRequest(new ListServiceQuotasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServiceQuotasRequest * ListServiceQuotasResponse::request() const
{
    Q_D(const ListServiceQuotasResponse);
    return static_cast<const ListServiceQuotasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas ListServiceQuotas \a response.
 */
void ListServiceQuotasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServiceQuotasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotasResponsePrivate
 * \brief The ListServiceQuotasResponsePrivate class provides private implementation for ListServiceQuotasResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServiceQuotasResponsePrivate object with public implementation \a q.
 */
ListServiceQuotasResponsePrivate::ListServiceQuotasResponsePrivate(
    ListServiceQuotasResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas ListServiceQuotas response element from \a xml.
 */
void ListServiceQuotasResponsePrivate::parseListServiceQuotasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceQuotasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
