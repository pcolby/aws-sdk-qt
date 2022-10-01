// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexpressionresponse.h"
#include "deleteexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteExpressionResponse
 * \brief The DeleteExpressionResponse class provides an interace for CloudSearch DeleteExpression responses.
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
 * \sa CloudSearchClient::deleteExpression
 */

/*!
 * Constructs a DeleteExpressionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExpressionResponse::DeleteExpressionResponse(
        const DeleteExpressionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteExpressionResponsePrivate(this), parent)
{
    setRequest(new DeleteExpressionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExpressionRequest * DeleteExpressionResponse::request() const
{
    Q_D(const DeleteExpressionResponse);
    return static_cast<const DeleteExpressionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DeleteExpression \a response.
 */
void DeleteExpressionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExpressionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DeleteExpressionResponsePrivate
 * \brief The DeleteExpressionResponsePrivate class provides private implementation for DeleteExpressionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteExpressionResponsePrivate object with public implementation \a q.
 */
DeleteExpressionResponsePrivate::DeleteExpressionResponsePrivate(
    DeleteExpressionResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DeleteExpression response element from \a xml.
 */
void DeleteExpressionResponsePrivate::parseDeleteExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExpressionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
