// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbyresponseheaderspolicyidresponse.h"
#include "listdistributionsbyresponseheaderspolicyidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdResponse
 * \brief The ListDistributionsByResponseHeadersPolicyIdResponse class provides an interace for CloudFront ListDistributionsByResponseHeadersPolicyId responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByResponseHeadersPolicyId
 */

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByResponseHeadersPolicyIdResponse::ListDistributionsByResponseHeadersPolicyIdResponse(
        const ListDistributionsByResponseHeadersPolicyIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByResponseHeadersPolicyIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByResponseHeadersPolicyIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByResponseHeadersPolicyIdRequest * ListDistributionsByResponseHeadersPolicyIdResponse::request() const
{
    Q_D(const ListDistributionsByResponseHeadersPolicyIdResponse);
    return static_cast<const ListDistributionsByResponseHeadersPolicyIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByResponseHeadersPolicyId \a response.
 */
void ListDistributionsByResponseHeadersPolicyIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByResponseHeadersPolicyIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdResponsePrivate
 * \brief The ListDistributionsByResponseHeadersPolicyIdResponsePrivate class provides private implementation for ListDistributionsByResponseHeadersPolicyIdResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdResponsePrivate object with public implementation \a q.
 */
ListDistributionsByResponseHeadersPolicyIdResponsePrivate::ListDistributionsByResponseHeadersPolicyIdResponsePrivate(
    ListDistributionsByResponseHeadersPolicyIdResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByResponseHeadersPolicyId response element from \a xml.
 */
void ListDistributionsByResponseHeadersPolicyIdResponsePrivate::parseListDistributionsByResponseHeadersPolicyIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByResponseHeadersPolicyIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
