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

#include "describequerysuggestionsconfigresponse.h"
#include "describequerysuggestionsconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsConfigResponse
 * \brief The DescribeQuerySuggestionsConfigResponse class provides an interace for kendra DescribeQuerySuggestionsConfig responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeQuerySuggestionsConfig
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeQuerySuggestionsConfigResponse::DescribeQuerySuggestionsConfigResponse(
        const DescribeQuerySuggestionsConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DescribeQuerySuggestionsConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeQuerySuggestionsConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeQuerySuggestionsConfigRequest * DescribeQuerySuggestionsConfigResponse::request() const
{
    return static_cast<const DescribeQuerySuggestionsConfigRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra DescribeQuerySuggestionsConfig \a response.
 */
void DescribeQuerySuggestionsConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeQuerySuggestionsConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsConfigResponsePrivate
 * \brief The DescribeQuerySuggestionsConfigResponsePrivate class provides private implementation for DescribeQuerySuggestionsConfigResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigResponsePrivate object with public implementation \a q.
 */
DescribeQuerySuggestionsConfigResponsePrivate::DescribeQuerySuggestionsConfigResponsePrivate(
    DescribeQuerySuggestionsConfigResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DescribeQuerySuggestionsConfig response element from \a xml.
 */
void DescribeQuerySuggestionsConfigResponsePrivate::parseDescribeQuerySuggestionsConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeQuerySuggestionsConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
