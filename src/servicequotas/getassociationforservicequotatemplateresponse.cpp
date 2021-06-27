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
    return static_cast<const GetAssociationForServiceQuotaTemplateRequest *>(ServiceQuotasResponse::request());
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
