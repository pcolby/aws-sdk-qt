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
