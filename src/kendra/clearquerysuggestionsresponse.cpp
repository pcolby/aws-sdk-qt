// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clearquerysuggestionsresponse.h"
#include "clearquerysuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsResponse
 * \brief The ClearQuerySuggestionsResponse class provides an interace for Kendra ClearQuerySuggestions responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::clearQuerySuggestions
 */

/*!
 * Constructs a ClearQuerySuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
ClearQuerySuggestionsResponse::ClearQuerySuggestionsResponse(
        const ClearQuerySuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ClearQuerySuggestionsResponsePrivate(this), parent)
{
    setRequest(new ClearQuerySuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClearQuerySuggestionsRequest * ClearQuerySuggestionsResponse::request() const
{
    Q_D(const ClearQuerySuggestionsResponse);
    return static_cast<const ClearQuerySuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ClearQuerySuggestions \a response.
 */
void ClearQuerySuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClearQuerySuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsResponsePrivate
 * \brief The ClearQuerySuggestionsResponsePrivate class provides private implementation for ClearQuerySuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ClearQuerySuggestionsResponsePrivate object with public implementation \a q.
 */
ClearQuerySuggestionsResponsePrivate::ClearQuerySuggestionsResponsePrivate(
    ClearQuerySuggestionsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ClearQuerySuggestions response element from \a xml.
 */
void ClearQuerySuggestionsResponsePrivate::parseClearQuerySuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClearQuerySuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
