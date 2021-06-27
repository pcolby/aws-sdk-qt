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

#include "listdistributionsbywebaclidresponse.h"
#include "listdistributionsbywebaclidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdResponse
 * \brief The ListDistributionsByWebACLIdResponse class provides an interace for CloudFront ListDistributionsByWebACLId responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByWebACLId
 */

/*!
 * Constructs a ListDistributionsByWebACLIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByWebACLIdResponse::ListDistributionsByWebACLIdResponse(
        const ListDistributionsByWebACLIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByWebACLIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByWebACLIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByWebACLIdRequest * ListDistributionsByWebACLIdResponse::request() const
{
    return static_cast<const ListDistributionsByWebACLIdRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByWebACLId \a response.
 */
void ListDistributionsByWebACLIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByWebACLIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdResponsePrivate
 * \brief The ListDistributionsByWebACLIdResponsePrivate class provides private implementation for ListDistributionsByWebACLIdResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByWebACLIdResponsePrivate object with public implementation \a q.
 */
ListDistributionsByWebACLIdResponsePrivate::ListDistributionsByWebACLIdResponsePrivate(
    ListDistributionsByWebACLIdResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByWebACLId response element from \a xml.
 */
void ListDistributionsByWebACLIdResponsePrivate::parseListDistributionsByWebACLIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByWebACLIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
