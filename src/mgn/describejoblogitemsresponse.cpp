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

#include "describejoblogitemsresponse.h"
#include "describejoblogitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeJobLogItemsResponse
 * \brief The DescribeJobLogItemsResponse class provides an interace for mgn DescribeJobLogItems responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeJobLogItems
 */

/*!
 * Constructs a DescribeJobLogItemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobLogItemsResponse::DescribeJobLogItemsResponse(
        const DescribeJobLogItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DescribeJobLogItemsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobLogItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobLogItemsRequest * DescribeJobLogItemsResponse::request() const
{
    Q_D(const DescribeJobLogItemsResponse);
    return static_cast<const DescribeJobLogItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn DescribeJobLogItems \a response.
 */
void DescribeJobLogItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobLogItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DescribeJobLogItemsResponsePrivate
 * \brief The DescribeJobLogItemsResponsePrivate class provides private implementation for DescribeJobLogItemsResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeJobLogItemsResponsePrivate object with public implementation \a q.
 */
DescribeJobLogItemsResponsePrivate::DescribeJobLogItemsResponsePrivate(
    DescribeJobLogItemsResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DescribeJobLogItems response element from \a xml.
 */
void DescribeJobLogItemsResponsePrivate::parseDescribeJobLogItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobLogItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
