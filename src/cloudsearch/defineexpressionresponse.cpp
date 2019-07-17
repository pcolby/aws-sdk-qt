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

#include "defineexpressionresponse.h"
#include "defineexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineExpressionResponse
 * \brief The DefineExpressionResponse class provides an interace for CloudSearch DefineExpression responses.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::defineExpression
 */

/*!
 * Constructs a DefineExpressionResponse object for \a reply to \a request, with parent \a parent.
 */
DefineExpressionResponse::DefineExpressionResponse(
        const DefineExpressionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineExpressionResponsePrivate(this), parent)
{
    setRequest(new DefineExpressionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DefineExpressionRequest * DefineExpressionResponse::request() const
{
    Q_D(const DefineExpressionResponse);
    return static_cast<const DefineExpressionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DefineExpression \a response.
 */
void DefineExpressionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DefineExpressionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DefineExpressionResponsePrivate
 * \brief The DefineExpressionResponsePrivate class provides private implementation for DefineExpressionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineExpressionResponsePrivate object with public implementation \a q.
 */
DefineExpressionResponsePrivate::DefineExpressionResponsePrivate(
    DefineExpressionResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DefineExpression response element from \a xml.
 */
void DefineExpressionResponsePrivate::parseDefineExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineExpressionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
