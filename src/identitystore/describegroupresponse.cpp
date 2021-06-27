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

#include "describegroupresponse.h"
#include "describegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupResponse
 * \brief The DescribeGroupResponse class provides an interace for IdentityStore DescribeGroup responses.
 *
 * \inmodule QtAwsIdentityStore
 *
 *
 * \sa IdentityStoreClient::describeGroup
 */

/*!
 * Constructs a DescribeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupResponse::DescribeGroupResponse(
        const DescribeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new DescribeGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupRequest * DescribeGroupResponse::request() const
{
    return static_cast<const DescribeGroupRequest *>(IdentityStoreResponse::request());
}

/*!
 * \reimp
 * Parses a successful IdentityStore DescribeGroup \a response.
 */
void DescribeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupResponsePrivate
 * \brief The DescribeGroupResponsePrivate class provides private implementation for DescribeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupResponsePrivate object with public implementation \a q.
 */
DescribeGroupResponsePrivate::DescribeGroupResponsePrivate(
    DescribeGroupResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore DescribeGroup response element from \a xml.
 */
void DescribeGroupResponsePrivate::parseDescribeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws
