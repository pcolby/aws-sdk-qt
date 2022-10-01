// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequerysuggestionsblocklistresponse.h"
#include "deletequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteQuerySuggestionsBlockListResponse
 * \brief The DeleteQuerySuggestionsBlockListResponse class provides an interace for Kendra DeleteQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteQuerySuggestionsBlockList
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQuerySuggestionsBlockListResponse::DeleteQuerySuggestionsBlockListResponse(
        const DeleteQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new DeleteQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQuerySuggestionsBlockListRequest * DeleteQuerySuggestionsBlockListResponse::request() const
{
    Q_D(const DeleteQuerySuggestionsBlockListResponse);
    return static_cast<const DeleteQuerySuggestionsBlockListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteQuerySuggestionsBlockList \a response.
 */
void DeleteQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteQuerySuggestionsBlockListResponsePrivate
 * \brief The DeleteQuerySuggestionsBlockListResponsePrivate class provides private implementation for DeleteQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
DeleteQuerySuggestionsBlockListResponsePrivate::DeleteQuerySuggestionsBlockListResponsePrivate(
    DeleteQuerySuggestionsBlockListResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteQuerySuggestionsBlockList response element from \a xml.
 */
void DeleteQuerySuggestionsBlockListResponsePrivate::parseDeleteQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
