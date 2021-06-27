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

#include "describeconnectionaliasesresponse.h"
#include "describeconnectionaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesResponse
 * \brief The DescribeConnectionAliasesResponse class provides an interace for WorkSpaces DescribeConnectionAliases responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeConnectionAliases
 */

/*!
 * Constructs a DescribeConnectionAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionAliasesResponse::DescribeConnectionAliasesResponse(
        const DescribeConnectionAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeConnectionAliasesResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionAliasesRequest * DescribeConnectionAliasesResponse::request() const
{
    return static_cast<const DescribeConnectionAliasesRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeConnectionAliases \a response.
 */
void DescribeConnectionAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesResponsePrivate
 * \brief The DescribeConnectionAliasesResponsePrivate class provides private implementation for DescribeConnectionAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeConnectionAliasesResponsePrivate object with public implementation \a q.
 */
DescribeConnectionAliasesResponsePrivate::DescribeConnectionAliasesResponsePrivate(
    DescribeConnectionAliasesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeConnectionAliases response element from \a xml.
 */
void DescribeConnectionAliasesResponsePrivate::parseDescribeConnectionAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
