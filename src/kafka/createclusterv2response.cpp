/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
