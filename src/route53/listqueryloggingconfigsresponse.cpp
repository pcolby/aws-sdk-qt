// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqueryloggingconfigsresponse.h"
#include "listqueryloggingconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListQueryLoggingConfigsResponse
 * \brief The ListQueryLoggingConfigsResponse class provides an interace for Route53 ListQueryLoggingConfigs responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listQueryLoggingConfigs
 */

/*!
 * Constructs a ListQueryLoggingConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListQueryLoggingConfigsResponse::ListQueryLoggingConfigsResponse(
        const ListQueryLoggingConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListQueryLoggingConfigsResponsePrivate(this), parent)
{
    setRequest(new ListQueryLoggingConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQueryLoggingConfigsRequest * ListQueryLoggingConfigsResponse::request() const
{
    Q_D(const ListQueryLoggingConfigsResponse);
    return static_cast<const ListQueryLoggingConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListQueryLoggingConfigs \a response.
 */
void ListQueryLoggingConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQueryLoggingConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListQueryLoggingConfigsResponsePrivate
 * \brief The ListQueryLoggingConfigsResponsePrivate class provides private implementation for ListQueryLoggingConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListQueryLoggingConfigsResponsePrivate object with public implementation \a q.
 */
ListQueryLoggingConfigsResponsePrivate::ListQueryLoggingConfigsResponsePrivate(
    ListQueryLoggingConfigsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListQueryLoggingConfigs response element from \a xml.
 */
void ListQueryLoggingConfigsResponsePrivate::parseListQueryLoggingConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueryLoggingConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
