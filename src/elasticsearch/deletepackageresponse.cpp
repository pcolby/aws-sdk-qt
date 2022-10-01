// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackageresponse.h"
#include "deletepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeletePackageResponse
 * \brief The DeletePackageResponse class provides an interace for Elasticsearch DeletePackage responses.
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
 * \sa ElasticsearchClient::deletePackage
 */

/*!
 * Constructs a DeletePackageResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackageResponse::DeletePackageResponse(
        const DeletePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DeletePackageResponsePrivate(this), parent)
{
    setRequest(new DeletePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackageRequest * DeletePackageResponse::request() const
{
    Q_D(const DeletePackageResponse);
    return static_cast<const DeletePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DeletePackage \a response.
 */
void DeletePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DeletePackageResponsePrivate
 * \brief The DeletePackageResponsePrivate class provides private implementation for DeletePackageResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeletePackageResponsePrivate object with public implementation \a q.
 */
DeletePackageResponsePrivate::DeletePackageResponsePrivate(
    DeletePackageResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DeletePackage response element from \a xml.
 */
void DeletePackageResponsePrivate::parseDeletePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
