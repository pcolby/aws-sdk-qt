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

#include "listloggingconfigurationsresponse.h"
#include "listloggingconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListLoggingConfigurationsResponse
 * \brief The ListLoggingConfigurationsResponse class provides an interace for WAFRegional ListLoggingConfigurations responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listLoggingConfigurations
 */

/*!
 * Constructs a ListLoggingConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLoggingConfigurationsResponse::ListLoggingConfigurationsResponse(
        const ListLoggingConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListLoggingConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListLoggingConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLoggingConfigurationsRequest * ListLoggingConfigurationsResponse::request() const
{
    Q_D(const ListLoggingConfigurationsResponse);
    return static_cast<const ListLoggingConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListLoggingConfigurations \a response.
 */
void ListLoggingConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLoggingConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListLoggingConfigurationsResponsePrivate
 * \brief The ListLoggingConfigurationsResponsePrivate class provides private implementation for ListLoggingConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListLoggingConfigurationsResponsePrivate object with public implementation \a q.
 */
ListLoggingConfigurationsResponsePrivate::ListLoggingConfigurationsResponsePrivate(
    ListLoggingConfigurationsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListLoggingConfigurations response element from \a xml.
 */
void ListLoggingConfigurationsResponsePrivate::parseListLoggingConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLoggingConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
