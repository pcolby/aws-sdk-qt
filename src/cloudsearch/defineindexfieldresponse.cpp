/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(DefineIndexFieldResponse);
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
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
