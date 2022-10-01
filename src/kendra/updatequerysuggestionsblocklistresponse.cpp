// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatequerysuggestionsblocklistresponse.h"
#include "updatequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListResponse
 * \brief The UpdateQuerySuggestionsBlockListResponse class provides an interace for Kendra UpdateQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsBlockList
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQuerySuggestionsBlockListResponse::UpdateQuerySuggestionsBlockListResponse(
        const UpdateQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new UpdateQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQuerySuggestionsBlockListRequest * UpdateQuerySuggestionsBlockListResponse::request() const
{
    Q_D(const UpdateQuerySuggestionsBlockListResponse);
    return static_cast<const UpdateQuerySuggestionsBlockListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateQuerySuggestionsBlockList \a response.
 */
void UpdateQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListResponsePrivate
 * \brief The UpdateQuerySuggestionsBlockListResponsePrivate class provides private implementation for UpdateQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
UpdateQuerySuggestionsBlockListResponsePrivate::UpdateQuerySuggestionsBlockListResponsePrivate(
    UpdateQuerySuggestionsBlockListResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateQuerySuggestionsBlockList response element from \a xml.
 */
void UpdateQuerySuggestionsBlockListResponsePrivate::parseUpdateQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
