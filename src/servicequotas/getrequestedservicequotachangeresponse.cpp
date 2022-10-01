// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
