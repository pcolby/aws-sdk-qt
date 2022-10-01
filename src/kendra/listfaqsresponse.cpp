// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfaqsresponse.h"
#include "listfaqsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListFaqsResponse
 * \brief The ListFaqsResponse class provides an interace for Kendra ListFaqs responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listFaqs
 */

/*!
 * Constructs a ListFaqsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFaqsResponse::ListFaqsResponse(
        const ListFaqsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListFaqsResponsePrivate(this), parent)
{
    setRequest(new ListFaqsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFaqsRequest * ListFaqsResponse::request() const
{
    Q_D(const ListFaqsResponse);
    return static_cast<const ListFaqsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListFaqs \a response.
 */
void ListFaqsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFaqsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListFaqsResponsePrivate
 * \brief The ListFaqsResponsePrivate class provides private implementation for ListFaqsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListFaqsResponsePrivate object with public implementation \a q.
 */
ListFaqsResponsePrivate::ListFaqsResponsePrivate(
    ListFaqsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListFaqs response element from \a xml.
 */
void ListFaqsResponsePrivate::parseListFaqsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFaqsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
