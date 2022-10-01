// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectorsresponse.h"
#include "listconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListConnectorsResponse
 * \brief The ListConnectorsResponse class provides an interace for KafkaConnect ListConnectors responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listConnectors
 */

/*!
 * Constructs a ListConnectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorsResponse::ListConnectorsResponse(
        const ListConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new ListConnectorsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorsRequest * ListConnectorsResponse::request() const
{
    Q_D(const ListConnectorsResponse);
    return static_cast<const ListConnectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect ListConnectors \a response.
 */
void ListConnectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::ListConnectorsResponsePrivate
 * \brief The ListConnectorsResponsePrivate class provides private implementation for ListConnectorsResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListConnectorsResponsePrivate object with public implementation \a q.
 */
ListConnectorsResponsePrivate::ListConnectorsResponsePrivate(
    ListConnectorsResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect ListConnectors response element from \a xml.
 */
void ListConnectorsResponsePrivate::parseListConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
