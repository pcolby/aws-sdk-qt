/*
    Copyright 2013-2021 Paul Colby

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
