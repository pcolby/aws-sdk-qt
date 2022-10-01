// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablecolumnsresponse.h"
#include "listtablecolumnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableColumnsResponse
 * \brief The ListTableColumnsResponse class provides an interace for Honeycode ListTableColumns responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableColumns
 */

/*!
 * Constructs a ListTableColumnsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableColumnsResponse::ListTableColumnsResponse(
        const ListTableColumnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new ListTableColumnsResponsePrivate(this), parent)
{
    setRequest(new ListTableColumnsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableColumnsRequest * ListTableColumnsResponse::request() const
{
    Q_D(const ListTableColumnsResponse);
    return static_cast<const ListTableColumnsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode ListTableColumns \a response.
 */
void ListTableColumnsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableColumnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::ListTableColumnsResponsePrivate
 * \brief The ListTableColumnsResponsePrivate class provides private implementation for ListTableColumnsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableColumnsResponsePrivate object with public implementation \a q.
 */
ListTableColumnsResponsePrivate::ListTableColumnsResponsePrivate(
    ListTableColumnsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode ListTableColumns response element from \a xml.
 */
void ListTableColumnsResponsePrivate::parseListTableColumnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableColumnsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
