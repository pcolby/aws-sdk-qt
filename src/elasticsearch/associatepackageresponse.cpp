// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatepackageresponse.h"
#include "associatepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::AssociatePackageResponse
 * \brief The AssociatePackageResponse class provides an interace for Elasticsearch AssociatePackage responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::associatePackage
 */

/*!
 * Constructs a AssociatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
AssociatePackageResponse::AssociatePackageResponse(
        const AssociatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new AssociatePackageResponsePrivate(this), parent)
{
    setRequest(new AssociatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociatePackageRequest * AssociatePackageResponse::request() const
{
    Q_D(const AssociatePackageResponse);
    return static_cast<const AssociatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch AssociatePackage \a response.
 */
void AssociatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::AssociatePackageResponsePrivate
 * \brief The AssociatePackageResponsePrivate class provides private implementation for AssociatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a AssociatePackageResponsePrivate object with public implementation \a q.
 */
AssociatePackageResponsePrivate::AssociatePackageResponsePrivate(
    AssociatePackageResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch AssociatePackage response element from \a xml.
 */
void AssociatePackageResponsePrivate::parseAssociatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
