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

#include "listdistributionsbykeygroupresponse.h"
#include "listdistributionsbykeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupResponse
 * \brief The ListDistributionsByKeyGroupResponse class provides an interace for CloudFront ListDistributionsByKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByKeyGroup
 */

/*!
 * Constructs a ListDistributionsByKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByKeyGroupResponse::ListDistributionsByKeyGroupResponse(
        const ListDistributionsByKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByKeyGroupResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByKeyGroupRequest * ListDistributionsByKeyGroupResponse::request() const
{
    return static_cast<const ListDistributionsByKeyGroupRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByKeyGroup \a response.
 */
void ListDistributionsByKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupResponsePrivate
 * \brief The ListDistributionsByKeyGroupResponsePrivate class provides private implementation for ListDistributionsByKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByKeyGroupResponsePrivate object with public implementation \a q.
 */
ListDistributionsByKeyGroupResponsePrivate::ListDistributionsByKeyGroupResponsePrivate(
    ListDistributionsByKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByKeyGroup response element from \a xml.
 */
void ListDistributionsByKeyGroupResponsePrivate::parseListDistributionsByKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
