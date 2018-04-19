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

#include "listsqlinjectionmatchsetsresponse.h"
#include "listsqlinjectionmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListSqlInjectionMatchSetsResponse
 * \brief The ListSqlInjectionMatchSetsResponse class provides an interace for WAF ListSqlInjectionMatchSets responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::listSqlInjectionMatchSets
 */

/*!
 * Constructs a ListSqlInjectionMatchSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSqlInjectionMatchSetsResponse::ListSqlInjectionMatchSetsResponse(
        const ListSqlInjectionMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListSqlInjectionMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListSqlInjectionMatchSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSqlInjectionMatchSetsRequest * ListSqlInjectionMatchSetsResponse::request() const
{
    Q_D(const ListSqlInjectionMatchSetsResponse);
    return static_cast<const ListSqlInjectionMatchSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF ListSqlInjectionMatchSets \a response.
 */
void ListSqlInjectionMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSqlInjectionMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::ListSqlInjectionMatchSetsResponsePrivate
 * \brief The ListSqlInjectionMatchSetsResponsePrivate class provides private implementation for ListSqlInjectionMatchSetsResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a ListSqlInjectionMatchSetsResponsePrivate object with public implementation \a q.
 */
ListSqlInjectionMatchSetsResponsePrivate::ListSqlInjectionMatchSetsResponsePrivate(
    ListSqlInjectionMatchSetsResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF ListSqlInjectionMatchSets response element from \a xml.
 */
void ListSqlInjectionMatchSetsResponsePrivate::parseListSqlInjectionMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSqlInjectionMatchSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
