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
