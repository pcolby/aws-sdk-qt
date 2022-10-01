// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquerysuggestionsresponse.h"
#include "getquerysuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::GetQuerySuggestionsResponse
 * \brief The GetQuerySuggestionsResponse class provides an interace for Kendra GetQuerySuggestions responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::getQuerySuggestions
 */

/*!
 * Constructs a GetQuerySuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetQuerySuggestionsResponse::GetQuerySuggestionsResponse(
        const GetQuerySuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new GetQuerySuggestionsResponsePrivate(this), parent)
{
    setRequest(new GetQuerySuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQuerySuggestionsRequest * GetQuerySuggestionsResponse::request() const
{
    Q_D(const GetQuerySuggestionsResponse);
    return static_cast<const GetQuerySuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra GetQuerySuggestions \a response.
 */
void GetQuerySuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQuerySuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::GetQuerySuggestionsResponsePrivate
 * \brief The GetQuerySuggestionsResponsePrivate class provides private implementation for GetQuerySuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a GetQuerySuggestionsResponsePrivate object with public implementation \a q.
 */
GetQuerySuggestionsResponsePrivate::GetQuerySuggestionsResponsePrivate(
    GetQuerySuggestionsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra GetQuerySuggestions response element from \a xml.
 */
void GetQuerySuggestionsResponsePrivate::parseGetQuerySuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQuerySuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
