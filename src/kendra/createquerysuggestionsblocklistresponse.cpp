// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createquerysuggestionsblocklistresponse.h"
#include "createquerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateQuerySuggestionsBlockListResponse
 * \brief The CreateQuerySuggestionsBlockListResponse class provides an interace for Kendra CreateQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createQuerySuggestionsBlockList
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQuerySuggestionsBlockListResponse::CreateQuerySuggestionsBlockListResponse(
        const CreateQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new CreateQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQuerySuggestionsBlockListRequest * CreateQuerySuggestionsBlockListResponse::request() const
{
    Q_D(const CreateQuerySuggestionsBlockListResponse);
    return static_cast<const CreateQuerySuggestionsBlockListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateQuerySuggestionsBlockList \a response.
 */
void CreateQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateQuerySuggestionsBlockListResponsePrivate
 * \brief The CreateQuerySuggestionsBlockListResponsePrivate class provides private implementation for CreateQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
CreateQuerySuggestionsBlockListResponsePrivate::CreateQuerySuggestionsBlockListResponsePrivate(
    CreateQuerySuggestionsBlockListResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateQuerySuggestionsBlockList response element from \a xml.
 */
void CreateQuerySuggestionsBlockListResponsePrivate::parseCreateQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
