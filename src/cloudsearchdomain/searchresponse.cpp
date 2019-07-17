/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchresponse.h"
#include "searchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::SearchResponse
 * \brief The SearchResponse class provides an interace for CloudSearchDomain Search responses.
 *
 * \inmodule QtAwsCloudSearchDomain
 *
 *  You use the AmazonCloudSearch2013 API to upload documents to a search domain and search those documents.
 * 
 *  </p
 * 
 *  The endpoints for submitting <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code> requests are
 *  domain-specific. To get the endpoints for your domain, use the Amazon CloudSearch configuration service
 *  <code>DescribeDomains</code> action. The domain endpoints are also displayed on the domain dashboard in the Amazon
 *  CloudSearch console. You submit suggest requests to the search endpoint.
 * 
 *  </p
 * 
 *  For more information, see the <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon CloudSearch
 *  Developer
 *
 * \sa CloudSearchDomainClient::search
 */

/*!
 * Constructs a SearchResponse object for \a reply to \a request, with parent \a parent.
 */
SearchResponse::SearchResponse(
        const SearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new SearchResponsePrivate(this), parent)
{
    setRequest(new SearchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchRequest * SearchResponse::request() const
{
    Q_D(const SearchResponse);
    return static_cast<const SearchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearchDomain Search \a response.
 */
void SearchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearchDomain::SearchResponsePrivate
 * \brief The SearchResponsePrivate class provides private implementation for SearchResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a SearchResponsePrivate object with public implementation \a q.
 */
SearchResponsePrivate::SearchResponsePrivate(
    SearchResponse * const q) : CloudSearchDomainResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearchDomain Search response element from \a xml.
 */
void SearchResponsePrivate::parseSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
