// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "definesuggesterresponse.h"
#include "definesuggesterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineSuggesterResponse
 * \brief The DefineSuggesterResponse class provides an interace for CloudSearch DefineSuggester responses.
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
 * \sa CloudSearchClient::defineSuggester
 */

/*!
 * Constructs a DefineSuggesterResponse object for \a reply to \a request, with parent \a parent.
 */
DefineSuggesterResponse::DefineSuggesterResponse(
        const DefineSuggesterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineSuggesterResponsePrivate(this), parent)
{
    setRequest(new DefineSuggesterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DefineSuggesterRequest * DefineSuggesterResponse::request() const
{
    Q_D(const DefineSuggesterResponse);
    return static_cast<const DefineSuggesterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DefineSuggester \a response.
 */
void DefineSuggesterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DefineSuggesterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DefineSuggesterResponsePrivate
 * \brief The DefineSuggesterResponsePrivate class provides private implementation for DefineSuggesterResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineSuggesterResponsePrivate object with public implementation \a q.
 */
DefineSuggesterResponsePrivate::DefineSuggesterResponsePrivate(
    DefineSuggesterResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DefineSuggester response element from \a xml.
 */
void DefineSuggesterResponsePrivate::parseDefineSuggesterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineSuggesterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
