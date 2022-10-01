// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatequerysuggestionsconfigresponse.h"
#include "updatequerysuggestionsconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigResponse
 * \brief The UpdateQuerySuggestionsConfigResponse class provides an interace for Kendra UpdateQuerySuggestionsConfig responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsConfig
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQuerySuggestionsConfigResponse::UpdateQuerySuggestionsConfigResponse(
        const UpdateQuerySuggestionsConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateQuerySuggestionsConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateQuerySuggestionsConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQuerySuggestionsConfigRequest * UpdateQuerySuggestionsConfigResponse::request() const
{
    Q_D(const UpdateQuerySuggestionsConfigResponse);
    return static_cast<const UpdateQuerySuggestionsConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateQuerySuggestionsConfig \a response.
 */
void UpdateQuerySuggestionsConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQuerySuggestionsConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigResponsePrivate
 * \brief The UpdateQuerySuggestionsConfigResponsePrivate class provides private implementation for UpdateQuerySuggestionsConfigResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigResponsePrivate object with public implementation \a q.
 */
UpdateQuerySuggestionsConfigResponsePrivate::UpdateQuerySuggestionsConfigResponsePrivate(
    UpdateQuerySuggestionsConfigResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateQuerySuggestionsConfig response element from \a xml.
 */
void UpdateQuerySuggestionsConfigResponsePrivate::parseUpdateQuerySuggestionsConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQuerySuggestionsConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
