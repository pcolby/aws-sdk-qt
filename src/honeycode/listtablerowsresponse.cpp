// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablerowsresponse.h"
#include "listtablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableRowsResponse
 * \brief The ListTableRowsResponse class provides an interace for Honeycode ListTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableRows
 */

/*!
 * Constructs a ListTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableRowsResponse::ListTableRowsResponse(
        const ListTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new ListTableRowsResponsePrivate(this), parent)
{
    setRequest(new ListTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableRowsRequest * ListTableRowsResponse::request() const
{
    Q_D(const ListTableRowsResponse);
    return static_cast<const ListTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode ListTableRows \a response.
 */
void ListTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::ListTableRowsResponsePrivate
 * \brief The ListTableRowsResponsePrivate class provides private implementation for ListTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableRowsResponsePrivate object with public implementation \a q.
 */
ListTableRowsResponsePrivate::ListTableRowsResponsePrivate(
    ListTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode ListTableRows response element from \a xml.
 */
void ListTableRowsResponsePrivate::parseListTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
