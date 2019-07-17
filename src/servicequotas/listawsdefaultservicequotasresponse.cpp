/*
    Copyright 2013-2019 Paul Colby

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

#include "listawsdefaultservicequotasresponse.h"
#include "listawsdefaultservicequotasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListAWSDefaultServiceQuotasResponse
 * \brief The ListAWSDefaultServiceQuotasResponse class provides an interace for ServiceQuotas ListAWSDefaultServiceQuotas responses.
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
 * \sa ServiceQuotasClient::listAWSDefaultServiceQuotas
 */

/*!
 * Constructs a ListAWSDefaultServiceQuotasResponse object for \a reply to \a request, with parent \a parent.
 */
ListAWSDefaultServiceQuotasResponse::ListAWSDefaultServiceQuotasResponse(
        const ListAWSDefaultServiceQuotasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new ListAWSDefaultServiceQuotasResponsePrivate(this), parent)
{
    setRequest(new ListAWSDefaultServiceQuotasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAWSDefaultServiceQuotasRequest * ListAWSDefaultServiceQuotasResponse::request() const
{
    Q_D(const ListAWSDefaultServiceQuotasResponse);
    return static_cast<const ListAWSDefaultServiceQuotasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas ListAWSDefaultServiceQuotas \a response.
 */
void ListAWSDefaultServiceQuotasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAWSDefaultServiceQuotasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::ListAWSDefaultServiceQuotasResponsePrivate
 * \brief The ListAWSDefaultServiceQuotasResponsePrivate class provides private implementation for ListAWSDefaultServiceQuotasResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListAWSDefaultServiceQuotasResponsePrivate object with public implementation \a q.
 */
ListAWSDefaultServiceQuotasResponsePrivate::ListAWSDefaultServiceQuotasResponsePrivate(
    ListAWSDefaultServiceQuotasResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas ListAWSDefaultServiceQuotas response element from \a xml.
 */
void ListAWSDefaultServiceQuotasResponsePrivate::parseListAWSDefaultServiceQuotasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAWSDefaultServiceQuotasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
