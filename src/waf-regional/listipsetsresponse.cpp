/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listipsetsresponse.h"
#include "listipsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListIPSetsResponse
 * \brief The ListIPSetsResponse class provides an interace for WAFRegional ListIPSets responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listIPSets
 */

/*!
 * Constructs a ListIPSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIPSetsResponse::ListIPSetsResponse(
        const ListIPSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListIPSetsResponsePrivate(this), parent)
{
    setRequest(new ListIPSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIPSetsRequest * ListIPSetsResponse::request() const
{
    Q_D(const ListIPSetsResponse);
    return static_cast<const ListIPSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListIPSets \a response.
 */
void ListIPSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListIPSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListIPSetsResponsePrivate
 * \brief The ListIPSetsResponsePrivate class provides private implementation for ListIPSetsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListIPSetsResponsePrivate object with public implementation \a q.
 */
ListIPSetsResponsePrivate::ListIPSetsResponsePrivate(
    ListIPSetsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListIPSets response element from \a xml.
 */
void ListIPSetsResponsePrivate::parseListIPSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIPSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
