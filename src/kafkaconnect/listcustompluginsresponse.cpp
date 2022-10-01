// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustompluginsresponse.h"
#include "listcustompluginsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListCustomPluginsResponse
 * \brief The ListCustomPluginsResponse class provides an interace for KafkaConnect ListCustomPlugins responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listCustomPlugins
 */

/*!
 * Constructs a ListCustomPluginsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomPluginsResponse::ListCustomPluginsResponse(
        const ListCustomPluginsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new ListCustomPluginsResponsePrivate(this), parent)
{
    setRequest(new ListCustomPluginsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomPluginsRequest * ListCustomPluginsResponse::request() const
{
    Q_D(const ListCustomPluginsResponse);
    return static_cast<const ListCustomPluginsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect ListCustomPlugins \a response.
 */
void ListCustomPluginsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomPluginsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::ListCustomPluginsResponsePrivate
 * \brief The ListCustomPluginsResponsePrivate class provides private implementation for ListCustomPluginsResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListCustomPluginsResponsePrivate object with public implementation \a q.
 */
ListCustomPluginsResponsePrivate::ListCustomPluginsResponsePrivate(
    ListCustomPluginsResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect ListCustomPlugins response element from \a xml.
 */
void ListCustomPluginsResponsePrivate::parseListCustomPluginsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomPluginsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
