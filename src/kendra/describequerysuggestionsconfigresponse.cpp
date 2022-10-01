// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describequerysuggestionsconfigresponse.h"
#include "describequerysuggestionsconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsConfigResponse
 * \brief The DescribeQuerySuggestionsConfigResponse class provides an interace for Kendra DescribeQuerySuggestionsConfig responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeQuerySuggestionsConfig
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeQuerySuggestionsConfigResponse::DescribeQuerySuggestionsConfigResponse(
        const DescribeQuerySuggestionsConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeQuerySuggestionsConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeQuerySuggestionsConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeQuerySuggestionsConfigRequest * DescribeQuerySuggestionsConfigResponse::request() const
{
    Q_D(const DescribeQuerySuggestionsConfigResponse);
    return static_cast<const DescribeQuerySuggestionsConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeQuerySuggestionsConfig \a response.
 */
void DescribeQuerySuggestionsConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeQuerySuggestionsConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsConfigResponsePrivate
 * \brief The DescribeQuerySuggestionsConfigResponsePrivate class provides private implementation for DescribeQuerySuggestionsConfigResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigResponsePrivate object with public implementation \a q.
 */
DescribeQuerySuggestionsConfigResponsePrivate::DescribeQuerySuggestionsConfigResponsePrivate(
    DescribeQuerySuggestionsConfigResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeQuerySuggestionsConfig response element from \a xml.
 */
void DescribeQuerySuggestionsConfigResponsePrivate::parseDescribeQuerySuggestionsConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeQuerySuggestionsConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
