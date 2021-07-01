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

#include "listdistributionsbyoriginrequestpolicyidresponse.h"
#include "listdistributionsbyoriginrequestpolicyidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByOriginRequestPolicyIdResponse
 * \brief The ListDistributionsByOriginRequestPolicyIdResponse class provides an interace for CloudFront ListDistributionsByOriginRequestPolicyId responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByOriginRequestPolicyId
 */

/*!
 * Constructs a ListDistributionsByOriginRequestPolicyIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByOriginRequestPolicyIdResponse::ListDistributionsByOriginRequestPolicyIdResponse(
        const ListDistributionsByOriginRequestPolicyIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByOriginRequestPolicyIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByOriginRequestPolicyIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByOriginRequestPolicyIdRequest * ListDistributionsByOriginRequestPolicyIdResponse::request() const
{
    Q_D(const ListDistributionsByOriginRequestPolicyIdResponse);
    return static_cast<const ListDistributionsByOriginRequestPolicyIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByOriginRequestPolicyId \a response.
 */
void ListDistributionsByOriginRequestPolicyIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByOriginRequestPolicyIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByOriginRequestPolicyIdResponsePrivate
 * \brief The ListDistributionsByOriginRequestPolicyIdResponsePrivate class provides private implementation for ListDistributionsByOriginRequestPolicyIdResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByOriginRequestPolicyIdResponsePrivate object with public implementation \a q.
 */
ListDistributionsByOriginRequestPolicyIdResponsePrivate::ListDistributionsByOriginRequestPolicyIdResponsePrivate(
    ListDistributionsByOriginRequestPolicyIdResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByOriginRequestPolicyId response element from \a xml.
 */
void ListDistributionsByOriginRequestPolicyIdResponsePrivate::parseListDistributionsByOriginRequestPolicyIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByOriginRequestPolicyIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
