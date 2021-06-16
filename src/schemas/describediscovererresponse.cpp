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

#include "describediscovererresponse.h"
#include "describediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeDiscovererResponse
 * \brief The DescribeDiscovererResponse class provides an interace for Schemas DescribeDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeDiscoverer
 */

/*!
 * Constructs a DescribeDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDiscovererResponse::DescribeDiscovererResponse(
        const DescribeDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DescribeDiscovererResponsePrivate(this), parent)
{
    setRequest(new DescribeDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDiscovererRequest * DescribeDiscovererResponse::request() const
{
    Q_D(const DescribeDiscovererResponse);
    return static_cast<const DescribeDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DescribeDiscoverer \a response.
 */
void DescribeDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DescribeDiscovererResponsePrivate
 * \brief The DescribeDiscovererResponsePrivate class provides private implementation for DescribeDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeDiscovererResponsePrivate object with public implementation \a q.
 */
DescribeDiscovererResponsePrivate::DescribeDiscovererResponsePrivate(
    DescribeDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DescribeDiscoverer response element from \a xml.
 */
void DescribeDiscovererResponsePrivate::parseDescribeDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
