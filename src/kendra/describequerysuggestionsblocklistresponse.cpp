// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describequerysuggestionsblocklistresponse.h"
#include "describequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListResponse
 * \brief The DescribeQuerySuggestionsBlockListResponse class provides an interace for Kendra DescribeQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeQuerySuggestionsBlockList
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeQuerySuggestionsBlockListResponse::DescribeQuerySuggestionsBlockListResponse(
        const DescribeQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new DescribeQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeQuerySuggestionsBlockListRequest * DescribeQuerySuggestionsBlockListResponse::request() const
{
    Q_D(const DescribeQuerySuggestionsBlockListResponse);
    return static_cast<const DescribeQuerySuggestionsBlockListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeQuerySuggestionsBlockList \a response.
 */
void DescribeQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListResponsePrivate
 * \brief The DescribeQuerySuggestionsBlockListResponsePrivate class provides private implementation for DescribeQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
DescribeQuerySuggestionsBlockListResponsePrivate::DescribeQuerySuggestionsBlockListResponsePrivate(
    DescribeQuerySuggestionsBlockListResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeQuerySuggestionsBlockList response element from \a xml.
 */
void DescribeQuerySuggestionsBlockListResponsePrivate::parseDescribeQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
