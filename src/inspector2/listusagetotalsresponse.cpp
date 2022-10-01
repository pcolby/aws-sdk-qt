// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusagetotalsresponse.h"
#include "listusagetotalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListUsageTotalsResponse
 * \brief The ListUsageTotalsResponse class provides an interace for Inspector2 ListUsageTotals responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listUsageTotals
 */

/*!
 * Constructs a ListUsageTotalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsageTotalsResponse::ListUsageTotalsResponse(
        const ListUsageTotalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListUsageTotalsResponsePrivate(this), parent)
{
    setRequest(new ListUsageTotalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsageTotalsRequest * ListUsageTotalsResponse::request() const
{
    Q_D(const ListUsageTotalsResponse);
    return static_cast<const ListUsageTotalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListUsageTotals \a response.
 */
void ListUsageTotalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsageTotalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListUsageTotalsResponsePrivate
 * \brief The ListUsageTotalsResponsePrivate class provides private implementation for ListUsageTotalsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListUsageTotalsResponsePrivate object with public implementation \a q.
 */
ListUsageTotalsResponsePrivate::ListUsageTotalsResponsePrivate(
    ListUsageTotalsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListUsageTotals response element from \a xml.
 */
void ListUsageTotalsResponsePrivate::parseListUsageTotalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsageTotalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
