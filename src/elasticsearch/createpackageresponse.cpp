// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpackageresponse.h"
#include "createpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CreatePackageResponse
 * \brief The CreatePackageResponse class provides an interace for Elasticsearch CreatePackage responses.
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
 * \sa ElasticsearchClient::createPackage
 */

/*!
 * Constructs a CreatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackageResponse::CreatePackageResponse(
        const CreatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new CreatePackageResponsePrivate(this), parent)
{
    setRequest(new CreatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackageRequest * CreatePackageResponse::request() const
{
    Q_D(const CreatePackageResponse);
    return static_cast<const CreatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch CreatePackage \a response.
 */
void CreatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::CreatePackageResponsePrivate
 * \brief The CreatePackageResponsePrivate class provides private implementation for CreatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CreatePackageResponsePrivate object with public implementation \a q.
 */
CreatePackageResponsePrivate::CreatePackageResponsePrivate(
    CreatePackageResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch CreatePackage response element from \a xml.
 */
void CreatePackageResponsePrivate::parseCreatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
