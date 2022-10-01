// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbootstrapbrokersresponse.h"
#include "getbootstrapbrokersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersResponse
 * \brief The GetBootstrapBrokersResponse class provides an interace for Kafka GetBootstrapBrokers responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::getBootstrapBrokers
 */

/*!
 * Constructs a GetBootstrapBrokersResponse object for \a reply to \a request, with parent \a parent.
 */
GetBootstrapBrokersResponse::GetBootstrapBrokersResponse(
        const GetBootstrapBrokersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new GetBootstrapBrokersResponsePrivate(this), parent)
{
    setRequest(new GetBootstrapBrokersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBootstrapBrokersRequest * GetBootstrapBrokersResponse::request() const
{
    Q_D(const GetBootstrapBrokersResponse);
    return static_cast<const GetBootstrapBrokersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka GetBootstrapBrokers \a response.
 */
void GetBootstrapBrokersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBootstrapBrokersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersResponsePrivate
 * \brief The GetBootstrapBrokersResponsePrivate class provides private implementation for GetBootstrapBrokersResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a GetBootstrapBrokersResponsePrivate object with public implementation \a q.
 */
GetBootstrapBrokersResponsePrivate::GetBootstrapBrokersResponsePrivate(
    GetBootstrapBrokersResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka GetBootstrapBrokers response element from \a xml.
 */
void GetBootstrapBrokersResponsePrivate::parseGetBootstrapBrokersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBootstrapBrokersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
