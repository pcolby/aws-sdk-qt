/*
    Copyright 2013-2020 Paul Colby

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
 *  Service Quotas is a web service that you can use to manage many of your AWS service quotas. Quotas, also referred to as
 *  limits, are the maximum values for a resource, item, or operation. This guide provide descriptions of the Service Quotas
 *  actions that you can call from an API. For the Service Quotas user guide, which explains how to use Service Quotas from
 *  the console, see <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What is Service
 *  Quotas</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for programming languages and platforms (Java, Ruby, .NET,
 *  iOS, Android, etc...,). The SDKs provide a convenient way to create programmatic access to Service Quotas and AWS. For
 *  information about the AWS SDKs, including how to download and install them, see the <a
 *  href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web Services</a>
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
