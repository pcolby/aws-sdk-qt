// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkerconfigurationsresponse.h"
#include "listworkerconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsResponse
 * \brief The ListWorkerConfigurationsResponse class provides an interace for KafkaConnect ListWorkerConfigurations responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listWorkerConfigurations
 */

/*!
 * Constructs a ListWorkerConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkerConfigurationsResponse::ListWorkerConfigurationsResponse(
        const ListWorkerConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new ListWorkerConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListWorkerConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkerConfigurationsRequest * ListWorkerConfigurationsResponse::request() const
{
    Q_D(const ListWorkerConfigurationsResponse);
    return static_cast<const ListWorkerConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect ListWorkerConfigurations \a response.
 */
void ListWorkerConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkerConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsResponsePrivate
 * \brief The ListWorkerConfigurationsResponsePrivate class provides private implementation for ListWorkerConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListWorkerConfigurationsResponsePrivate object with public implementation \a q.
 */
ListWorkerConfigurationsResponsePrivate::ListWorkerConfigurationsResponsePrivate(
    ListWorkerConfigurationsResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect ListWorkerConfigurations response element from \a xml.
 */
void ListWorkerConfigurationsResponsePrivate::parseListWorkerConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkerConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
