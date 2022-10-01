// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploaddocumentsresponse.h"
#include "uploaddocumentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::UploadDocumentsResponse
 * \brief The UploadDocumentsResponse class provides an interace for CloudSearchDomain UploadDocuments responses.
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
 * \sa CloudSearchDomainClient::uploadDocuments
 */

/*!
 * Constructs a UploadDocumentsResponse object for \a reply to \a request, with parent \a parent.
 */
UploadDocumentsResponse::UploadDocumentsResponse(
        const UploadDocumentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new UploadDocumentsResponsePrivate(this), parent)
{
    setRequest(new UploadDocumentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadDocumentsRequest * UploadDocumentsResponse::request() const
{
    Q_D(const UploadDocumentsResponse);
    return static_cast<const UploadDocumentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearchDomain UploadDocuments \a response.
 */
void UploadDocumentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadDocumentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearchDomain::UploadDocumentsResponsePrivate
 * \brief The UploadDocumentsResponsePrivate class provides private implementation for UploadDocumentsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a UploadDocumentsResponsePrivate object with public implementation \a q.
 */
UploadDocumentsResponsePrivate::UploadDocumentsResponsePrivate(
    UploadDocumentsResponse * const q) : CloudSearchDomainResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearchDomain UploadDocuments response element from \a xml.
 */
void UploadDocumentsResponsePrivate::parseUploadDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadDocumentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
