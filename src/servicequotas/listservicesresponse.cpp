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

#include "listservicesresponse.h"
#include "listservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServicesResponse
 * \brief The ListServicesResponse class provides an interace for ServiceQuotas ListServices responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServices
 */

/*!
 * Constructs a ListServicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListServicesResponse::ListServicesResponse(
        const ListServicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new ListServicesResponsePrivate(this), parent)
{
    setRequest(new ListServicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServicesRequest * ListServicesResponse::request() const
{
    Q_D(const ListServicesResponse);
    return static_cast<const ListServicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas ListServices \a response.
 */
void ListServicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::ListServicesResponsePrivate
 * \brief The ListServicesResponsePrivate class provides private implementation for ListServicesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServicesResponsePrivate object with public implementation \a q.
 */
ListServicesResponsePrivate::ListServicesResponsePrivate(
    ListServicesResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas ListServices response element from \a xml.
 */
void ListServicesResponsePrivate::parseListServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
