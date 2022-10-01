// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainendpointoptionsresponse.h"
#include "updatedomainendpointoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateDomainEndpointOptionsResponse
 * \brief The UpdateDomainEndpointOptionsResponse class provides an interace for CloudSearch UpdateDomainEndpointOptions responses.
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
 * \sa CloudSearchClient::updateDomainEndpointOptions
 */

/*!
 * Constructs a UpdateDomainEndpointOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainEndpointOptionsResponse::UpdateDomainEndpointOptionsResponse(
        const UpdateDomainEndpointOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new UpdateDomainEndpointOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainEndpointOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainEndpointOptionsRequest * UpdateDomainEndpointOptionsResponse::request() const
{
    Q_D(const UpdateDomainEndpointOptionsResponse);
    return static_cast<const UpdateDomainEndpointOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch UpdateDomainEndpointOptions \a response.
 */
void UpdateDomainEndpointOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainEndpointOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::UpdateDomainEndpointOptionsResponsePrivate
 * \brief The UpdateDomainEndpointOptionsResponsePrivate class provides private implementation for UpdateDomainEndpointOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateDomainEndpointOptionsResponsePrivate object with public implementation \a q.
 */
UpdateDomainEndpointOptionsResponsePrivate::UpdateDomainEndpointOptionsResponsePrivate(
    UpdateDomainEndpointOptionsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch UpdateDomainEndpointOptions response element from \a xml.
 */
void UpdateDomainEndpointOptionsResponsePrivate::parseUpdateDomainEndpointOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainEndpointOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
