// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanalysisschemeresponse.h"
#include "deleteanalysisschemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteAnalysisSchemeResponse
 * \brief The DeleteAnalysisSchemeResponse class provides an interace for CloudSearch DeleteAnalysisScheme responses.
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
 * \sa CloudSearchClient::deleteAnalysisScheme
 */

/*!
 * Constructs a DeleteAnalysisSchemeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnalysisSchemeResponse::DeleteAnalysisSchemeResponse(
        const DeleteAnalysisSchemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteAnalysisSchemeResponsePrivate(this), parent)
{
    setRequest(new DeleteAnalysisSchemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnalysisSchemeRequest * DeleteAnalysisSchemeResponse::request() const
{
    Q_D(const DeleteAnalysisSchemeResponse);
    return static_cast<const DeleteAnalysisSchemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DeleteAnalysisScheme \a response.
 */
void DeleteAnalysisSchemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnalysisSchemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DeleteAnalysisSchemeResponsePrivate
 * \brief The DeleteAnalysisSchemeResponsePrivate class provides private implementation for DeleteAnalysisSchemeResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteAnalysisSchemeResponsePrivate object with public implementation \a q.
 */
DeleteAnalysisSchemeResponsePrivate::DeleteAnalysisSchemeResponsePrivate(
    DeleteAnalysisSchemeResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DeleteAnalysisScheme response element from \a xml.
 */
void DeleteAnalysisSchemeResponsePrivate::parseDeleteAnalysisSchemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnalysisSchemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
