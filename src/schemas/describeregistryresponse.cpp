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

#include "describeregistryresponse.h"
#include "describeregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeRegistryResponse
 * \brief The DescribeRegistryResponse class provides an interace for Schemas DescribeRegistry responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeRegistry
 */

/*!
 * Constructs a DescribeRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRegistryResponse::DescribeRegistryResponse(
        const DescribeRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DescribeRegistryResponsePrivate(this), parent)
{
    setRequest(new DescribeRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRegistryRequest * DescribeRegistryResponse::request() const
{
    return static_cast<const DescribeRegistryRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas DescribeRegistry \a response.
 */
void DescribeRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DescribeRegistryResponsePrivate
 * \brief The DescribeRegistryResponsePrivate class provides private implementation for DescribeRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeRegistryResponsePrivate object with public implementation \a q.
 */
DescribeRegistryResponsePrivate::DescribeRegistryResponsePrivate(
    DescribeRegistryResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DescribeRegistry response element from \a xml.
 */
void DescribeRegistryResponsePrivate::parseDescribeRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
