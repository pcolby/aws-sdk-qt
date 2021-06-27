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

#include "describesourceserversresponse.h"
#include "describesourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeSourceServersResponse
 * \brief The DescribeSourceServersResponse class provides an interace for mgn DescribeSourceServers responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeSourceServers
 */

/*!
 * Constructs a DescribeSourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSourceServersResponse::DescribeSourceServersResponse(
        const DescribeSourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DescribeSourceServersResponsePrivate(this), parent)
{
    setRequest(new DescribeSourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSourceServersRequest * DescribeSourceServersResponse::request() const
{
    return static_cast<const DescribeSourceServersRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn DescribeSourceServers \a response.
 */
void DescribeSourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DescribeSourceServersResponsePrivate
 * \brief The DescribeSourceServersResponsePrivate class provides private implementation for DescribeSourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeSourceServersResponsePrivate object with public implementation \a q.
 */
DescribeSourceServersResponsePrivate::DescribeSourceServersResponsePrivate(
    DescribeSourceServersResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DescribeSourceServers response element from \a xml.
 */
void DescribeSourceServersResponsePrivate::parseDescribeSourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
