// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclusterv2response.h"
#include "createclusterv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateClusterV2Response
 * \brief The CreateClusterV2Response class provides an interace for Kafka CreateClusterV2 responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createClusterV2
 */

/*!
 * Constructs a CreateClusterV2Response object for \a reply to \a request, with parent \a parent.
 */
CreateClusterV2Response::CreateClusterV2Response(
        const CreateClusterV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new CreateClusterV2ResponsePrivate(this), parent)
{
    setRequest(new CreateClusterV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClusterV2Request * CreateClusterV2Response::request() const
{
    Q_D(const CreateClusterV2Response);
    return static_cast<const CreateClusterV2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka CreateClusterV2 \a response.
 */
void CreateClusterV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClusterV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::CreateClusterV2ResponsePrivate
 * \brief The CreateClusterV2ResponsePrivate class provides private implementation for CreateClusterV2Response.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateClusterV2ResponsePrivate object with public implementation \a q.
 */
CreateClusterV2ResponsePrivate::CreateClusterV2ResponsePrivate(
    CreateClusterV2Response * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka CreateClusterV2 response element from \a xml.
 */
void CreateClusterV2ResponsePrivate::parseCreateClusterV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
