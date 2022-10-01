// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "defineindexfieldresponse.h"
#include "defineindexfieldresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineIndexFieldResponse
 * \brief The DefineIndexFieldResponse class provides an interace for CloudSearch DefineIndexField responses.
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
 * \sa CloudSearchClient::defineIndexField
 */

/*!
 * Constructs a DefineIndexFieldResponse object for \a reply to \a request, with parent \a parent.
 */
DefineIndexFieldResponse::DefineIndexFieldResponse(
        const DefineIndexFieldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineIndexFieldResponsePrivate(this), parent)
{
    setRequest(new DefineIndexFieldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DefineIndexFieldRequest * DefineIndexFieldResponse::request() const
{
    Q_D(const DefineIndexFieldResponse);
    return static_cast<const DefineIndexFieldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DefineIndexField \a response.
 */
void DefineIndexFieldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DefineIndexFieldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DefineIndexFieldResponsePrivate
 * \brief The DefineIndexFieldResponsePrivate class provides private implementation for DefineIndexFieldResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineIndexFieldResponsePrivate object with public implementation \a q.
 */
DefineIndexFieldResponsePrivate::DefineIndexFieldResponsePrivate(
    DefineIndexFieldResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DefineIndexField response element from \a xml.
 */
void DefineIndexFieldResponsePrivate::parseDefineIndexFieldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineIndexFieldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
