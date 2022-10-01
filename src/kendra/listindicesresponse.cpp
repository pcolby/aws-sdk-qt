// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listindicesresponse.h"
#include "listindicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListIndicesResponse
 * \brief The ListIndicesResponse class provides an interace for Kendra ListIndices responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listIndices
 */

/*!
 * Constructs a ListIndicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListIndicesResponse::ListIndicesResponse(
        const ListIndicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListIndicesResponsePrivate(this), parent)
{
    setRequest(new ListIndicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIndicesRequest * ListIndicesResponse::request() const
{
    Q_D(const ListIndicesResponse);
    return static_cast<const ListIndicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListIndices \a response.
 */
void ListIndicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIndicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListIndicesResponsePrivate
 * \brief The ListIndicesResponsePrivate class provides private implementation for ListIndicesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListIndicesResponsePrivate object with public implementation \a q.
 */
ListIndicesResponsePrivate::ListIndicesResponsePrivate(
    ListIndicesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListIndices response element from \a xml.
 */
void ListIndicesResponsePrivate::parseListIndicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIndicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
