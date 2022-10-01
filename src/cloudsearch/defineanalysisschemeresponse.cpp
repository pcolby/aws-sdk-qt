// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "defineanalysisschemeresponse.h"
#include "defineanalysisschemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineAnalysisSchemeResponse
 * \brief The DefineAnalysisSchemeResponse class provides an interace for CloudSearch DefineAnalysisScheme responses.
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
 * \sa CloudSearchClient::defineAnalysisScheme
 */

/*!
 * Constructs a DefineAnalysisSchemeResponse object for \a reply to \a request, with parent \a parent.
 */
DefineAnalysisSchemeResponse::DefineAnalysisSchemeResponse(
        const DefineAnalysisSchemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineAnalysisSchemeResponsePrivate(this), parent)
{
    setRequest(new DefineAnalysisSchemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DefineAnalysisSchemeRequest * DefineAnalysisSchemeResponse::request() const
{
    Q_D(const DefineAnalysisSchemeResponse);
    return static_cast<const DefineAnalysisSchemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DefineAnalysisScheme \a response.
 */
void DefineAnalysisSchemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DefineAnalysisSchemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DefineAnalysisSchemeResponsePrivate
 * \brief The DefineAnalysisSchemeResponsePrivate class provides private implementation for DefineAnalysisSchemeResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineAnalysisSchemeResponsePrivate object with public implementation \a q.
 */
DefineAnalysisSchemeResponsePrivate::DefineAnalysisSchemeResponsePrivate(
    DefineAnalysisSchemeResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DefineAnalysisScheme response element from \a xml.
 */
void DefineAnalysisSchemeResponsePrivate::parseDefineAnalysisSchemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineAnalysisSchemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
