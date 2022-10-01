// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "indexdocumentsresponse.h"
#include "indexdocumentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::IndexDocumentsResponse
 * \brief The IndexDocumentsResponse class provides an interace for CloudSearch IndexDocuments responses.
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
 * \sa CloudSearchClient::indexDocuments
 */

/*!
 * Constructs a IndexDocumentsResponse object for \a reply to \a request, with parent \a parent.
 */
IndexDocumentsResponse::IndexDocumentsResponse(
        const IndexDocumentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new IndexDocumentsResponsePrivate(this), parent)
{
    setRequest(new IndexDocumentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IndexDocumentsRequest * IndexDocumentsResponse::request() const
{
    Q_D(const IndexDocumentsResponse);
    return static_cast<const IndexDocumentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch IndexDocuments \a response.
 */
void IndexDocumentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(IndexDocumentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::IndexDocumentsResponsePrivate
 * \brief The IndexDocumentsResponsePrivate class provides private implementation for IndexDocumentsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a IndexDocumentsResponsePrivate object with public implementation \a q.
 */
IndexDocumentsResponsePrivate::IndexDocumentsResponsePrivate(
    IndexDocumentsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch IndexDocuments response element from \a xml.
 */
void IndexDocumentsResponsePrivate::parseIndexDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IndexDocumentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
