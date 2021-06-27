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

#include "describefilesystemaliasesresponse.h"
#include "describefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesResponse
 * \brief The DescribeFileSystemAliasesResponse class provides an interace for FSx DescribeFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystemAliases
 */

/*!
 * Constructs a DescribeFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemAliasesResponse::DescribeFileSystemAliasesResponse(
        const DescribeFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemAliasesRequest * DescribeFileSystemAliasesResponse::request() const
{
    return static_cast<const DescribeFileSystemAliasesRequest *>(FSxResponse::request());
}

/*!
 * \reimp
 * Parses a successful FSx DescribeFileSystemAliases \a response.
 */
void DescribeFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesResponsePrivate
 * \brief The DescribeFileSystemAliasesResponsePrivate class provides private implementation for DescribeFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemAliasesResponsePrivate::DescribeFileSystemAliasesResponsePrivate(
    DescribeFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeFileSystemAliases response element from \a xml.
 */
void DescribeFileSystemAliasesResponsePrivate::parseDescribeFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
