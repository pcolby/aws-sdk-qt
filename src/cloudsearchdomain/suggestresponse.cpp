// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "suggestresponse.h"
#include "suggestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::SuggestResponse
 * \brief The SuggestResponse class provides an interace for CloudSearchDomain Suggest responses.
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
 * \sa CloudSearchDomainClient::suggest
 */

/*!
 * Constructs a SuggestResponse object for \a reply to \a request, with parent \a parent.
 */
SuggestResponse::SuggestResponse(
        const SuggestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new SuggestResponsePrivate(this), parent)
{
    setRequest(new SuggestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SuggestRequest * SuggestResponse::request() const
{
    Q_D(const SuggestResponse);
    return static_cast<const SuggestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearchDomain Suggest \a response.
 */
void SuggestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SuggestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearchDomain::SuggestResponsePrivate
 * \brief The SuggestResponsePrivate class provides private implementation for SuggestResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a SuggestResponsePrivate object with public implementation \a q.
 */
SuggestResponsePrivate::SuggestResponsePrivate(
    SuggestResponse * const q) : CloudSearchDomainResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearchDomain Suggest response element from \a xml.
 */
void SuggestResponsePrivate::parseSuggestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuggestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
