// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserviceaccesspoliciesresponse.h"
#include "updateserviceaccesspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateServiceAccessPoliciesResponse
 * \brief The UpdateServiceAccessPoliciesResponse class provides an interace for CloudSearch UpdateServiceAccessPolicies responses.
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
 * \sa CloudSearchClient::updateServiceAccessPolicies
 */

/*!
 * Constructs a UpdateServiceAccessPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceAccessPoliciesResponse::UpdateServiceAccessPoliciesResponse(
        const UpdateServiceAccessPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new UpdateServiceAccessPoliciesResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceAccessPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceAccessPoliciesRequest * UpdateServiceAccessPoliciesResponse::request() const
{
    Q_D(const UpdateServiceAccessPoliciesResponse);
    return static_cast<const UpdateServiceAccessPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch UpdateServiceAccessPolicies \a response.
 */
void UpdateServiceAccessPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceAccessPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::UpdateServiceAccessPoliciesResponsePrivate
 * \brief The UpdateServiceAccessPoliciesResponsePrivate class provides private implementation for UpdateServiceAccessPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateServiceAccessPoliciesResponsePrivate object with public implementation \a q.
 */
UpdateServiceAccessPoliciesResponsePrivate::UpdateServiceAccessPoliciesResponsePrivate(
    UpdateServiceAccessPoliciesResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch UpdateServiceAccessPolicies response element from \a xml.
 */
void UpdateServiceAccessPoliciesResponsePrivate::parseUpdateServiceAccessPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceAccessPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
