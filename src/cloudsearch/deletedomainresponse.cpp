// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainresponse.h"
#include "deletedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteDomainResponse
 * \brief The DeleteDomainResponse class provides an interace for CloudSearch DeleteDomain responses.
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
 * \sa CloudSearchClient::deleteDomain
 */

/*!
 * Constructs a DeleteDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainResponse::DeleteDomainResponse(
        const DeleteDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainRequest * DeleteDomainResponse::request() const
{
    Q_D(const DeleteDomainResponse);
    return static_cast<const DeleteDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DeleteDomain \a response.
 */
void DeleteDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DeleteDomainResponsePrivate
 * \brief The DeleteDomainResponsePrivate class provides private implementation for DeleteDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteDomainResponsePrivate object with public implementation \a q.
 */
DeleteDomainResponsePrivate::DeleteDomainResponsePrivate(
    DeleteDomainResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DeleteDomain response element from \a xml.
 */
void DeleteDomainResponsePrivate::parseDeleteDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
