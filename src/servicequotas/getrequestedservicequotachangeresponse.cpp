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

#include "getrequestedservicequotachangeresponse.h"
#include "getrequestedservicequotachangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetRequestedServiceQuotaChangeResponse
 * \brief The GetRequestedServiceQuotaChangeResponse class provides an interace for ServiceQuotas GetRequestedServiceQuotaChange responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getRequestedServiceQuotaChange
 */

/*!
 * Constructs a GetRequestedServiceQuotaChangeResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestedServiceQuotaChangeResponse::GetRequestedServiceQuotaChangeResponse(
        const GetRequestedServiceQuotaChangeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new GetRequestedServiceQuotaChangeResponsePrivate(this), parent)
{
    setRequest(new GetRequestedServiceQuotaChangeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestedServiceQuotaChangeRequest * GetRequestedServiceQuotaChangeResponse::request() const
{
    Q_D(const GetRequestedServiceQuotaChangeResponse);
    return static_cast<const GetRequestedServiceQuotaChangeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas GetRequestedServiceQuotaChange \a response.
 */
void GetRequestedServiceQuotaChangeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRequestedServiceQuotaChangeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::GetRequestedServiceQuotaChangeResponsePrivate
 * \brief The GetRequestedServiceQuotaChangeResponsePrivate class provides private implementation for GetRequestedServiceQuotaChangeResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetRequestedServiceQuotaChangeResponsePrivate object with public implementation \a q.
 */
GetRequestedServiceQuotaChangeResponsePrivate::GetRequestedServiceQuotaChangeResponsePrivate(
    GetRequestedServiceQuotaChangeResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas GetRequestedServiceQuotaChange response element from \a xml.
 */
void GetRequestedServiceQuotaChangeResponsePrivate::parseGetRequestedServiceQuotaChangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestedServiceQuotaChangeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
