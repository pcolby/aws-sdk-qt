// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbycachepolicyidresponse.h"
#include "listdistributionsbycachepolicyidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByCachePolicyIdResponse
 * \brief The ListDistributionsByCachePolicyIdResponse class provides an interace for CloudFront ListDistributionsByCachePolicyId responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByCachePolicyId
 */

/*!
 * Constructs a ListDistributionsByCachePolicyIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByCachePolicyIdResponse::ListDistributionsByCachePolicyIdResponse(
        const ListDistributionsByCachePolicyIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByCachePolicyIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByCachePolicyIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByCachePolicyIdRequest * ListDistributionsByCachePolicyIdResponse::request() const
{
    Q_D(const ListDistributionsByCachePolicyIdResponse);
    return static_cast<const ListDistributionsByCachePolicyIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByCachePolicyId \a response.
 */
void ListDistributionsByCachePolicyIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByCachePolicyIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByCachePolicyIdResponsePrivate
 * \brief The ListDistributionsByCachePolicyIdResponsePrivate class provides private implementation for ListDistributionsByCachePolicyIdResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByCachePolicyIdResponsePrivate object with public implementation \a q.
 */
ListDistributionsByCachePolicyIdResponsePrivate::ListDistributionsByCachePolicyIdResponsePrivate(
    ListDistributionsByCachePolicyIdResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByCachePolicyId response element from \a xml.
 */
void ListDistributionsByCachePolicyIdResponsePrivate::parseListDistributionsByCachePolicyIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByCachePolicyIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
