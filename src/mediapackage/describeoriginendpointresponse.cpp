/*
    Copyright 2013-2018 Paul Colby

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

#include "describeoriginendpointresponse.h"
#include "describeoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointResponse
 * \brief The DescribeOriginEndpointResponse class provides an interace for MediaPackage DescribeOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeOriginEndpoint
 */

/*!
 * Constructs a DescribeOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOriginEndpointResponse::DescribeOriginEndpointResponse(
        const DescribeOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOriginEndpointRequest * DescribeOriginEndpointResponse::request() const
{
    Q_D(const DescribeOriginEndpointResponse);
    return static_cast<const DescribeOriginEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DescribeOriginEndpoint \a response.
 */
void DescribeOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointResponsePrivate
 * \brief The DescribeOriginEndpointResponsePrivate class provides private implementation for DescribeOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeOriginEndpointResponsePrivate object with public implementation \a q.
 */
DescribeOriginEndpointResponsePrivate::DescribeOriginEndpointResponsePrivate(
    DescribeOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DescribeOriginEndpoint response element from \a xml.
 */
void DescribeOriginEndpointResponsePrivate::parseDescribeOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
