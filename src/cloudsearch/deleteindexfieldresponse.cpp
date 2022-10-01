// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteindexfieldresponse.h"
#include "deleteindexfieldresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteIndexFieldResponse
 * \brief The DeleteIndexFieldResponse class provides an interace for CloudSearch DeleteIndexField responses.
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
 * \sa CloudSearchClient::deleteIndexField
 */

/*!
 * Constructs a DeleteIndexFieldResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIndexFieldResponse::DeleteIndexFieldResponse(
        const DeleteIndexFieldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteIndexFieldResponsePrivate(this), parent)
{
    setRequest(new DeleteIndexFieldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIndexFieldRequest * DeleteIndexFieldResponse::request() const
{
    Q_D(const DeleteIndexFieldResponse);
    return static_cast<const DeleteIndexFieldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DeleteIndexField \a response.
 */
void DeleteIndexFieldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIndexFieldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DeleteIndexFieldResponsePrivate
 * \brief The DeleteIndexFieldResponsePrivate class provides private implementation for DeleteIndexFieldResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteIndexFieldResponsePrivate object with public implementation \a q.
 */
DeleteIndexFieldResponsePrivate::DeleteIndexFieldResponsePrivate(
    DeleteIndexFieldResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DeleteIndexField response element from \a xml.
 */
void DeleteIndexFieldResponsePrivate::parseDeleteIndexFieldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIndexFieldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
