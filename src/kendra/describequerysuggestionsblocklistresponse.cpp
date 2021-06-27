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

#include "describequerysuggestionsblocklistresponse.h"
#include "describequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsBlockListResponse
 * \brief The DescribeQuerySuggestionsBlockListResponse class provides an interace for kendra DescribeQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeQuerySuggestionsBlockList
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeQuerySuggestionsBlockListResponse::DescribeQuerySuggestionsBlockListResponse(
        const DescribeQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DescribeQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new DescribeQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeQuerySuggestionsBlockListRequest * DescribeQuerySuggestionsBlockListResponse::request() const
{
    return static_cast<const DescribeQuerySuggestionsBlockListRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra DescribeQuerySuggestionsBlockList \a response.
 */
void DescribeQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsBlockListResponsePrivate
 * \brief The DescribeQuerySuggestionsBlockListResponsePrivate class provides private implementation for DescribeQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
DescribeQuerySuggestionsBlockListResponsePrivate::DescribeQuerySuggestionsBlockListResponsePrivate(
    DescribeQuerySuggestionsBlockListResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DescribeQuerySuggestionsBlockList response element from \a xml.
 */
void DescribeQuerySuggestionsBlockListResponsePrivate::parseDescribeQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
