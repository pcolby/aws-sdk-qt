// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listledgersresponse.h"
#include "listledgersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListLedgersResponse
 * \brief The ListLedgersResponse class provides an interace for Qldb ListLedgers responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listLedgers
 */

/*!
 * Constructs a ListLedgersResponse object for \a reply to \a request, with parent \a parent.
 */
ListLedgersResponse::ListLedgersResponse(
        const ListLedgersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListLedgersResponsePrivate(this), parent)
{
    setRequest(new ListLedgersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLedgersRequest * ListLedgersResponse::request() const
{
    Q_D(const ListLedgersResponse);
    return static_cast<const ListLedgersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb ListLedgers \a response.
 */
void ListLedgersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLedgersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::ListLedgersResponsePrivate
 * \brief The ListLedgersResponsePrivate class provides private implementation for ListLedgersResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListLedgersResponsePrivate object with public implementation \a q.
 */
ListLedgersResponsePrivate::ListLedgersResponsePrivate(
    ListLedgersResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb ListLedgers response element from \a xml.
 */
void ListLedgersResponsePrivate::parseListLedgersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLedgersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
