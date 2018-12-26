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

#include "describefilesystemsresponse.h"
#include "describefilesystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemsResponse
 * \brief The DescribeFileSystemsResponse class provides an interace for FSx DescribeFileSystems responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystems
 */

/*!
 * Constructs a DescribeFileSystemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemsResponse::DescribeFileSystemsResponse(
        const DescribeFileSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeFileSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemsRequest * DescribeFileSystemsResponse::request() const
{
    Q_D(const DescribeFileSystemsResponse);
    return static_cast<const DescribeFileSystemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeFileSystems \a response.
 */
void DescribeFileSystemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeFileSystemsResponsePrivate
 * \brief The DescribeFileSystemsResponsePrivate class provides private implementation for DescribeFileSystemsResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemsResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponsePrivate(
    DescribeFileSystemsResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeFileSystems response element from \a xml.
 */
void DescribeFileSystemsResponsePrivate::parseDescribeFileSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
