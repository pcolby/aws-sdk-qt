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

#include "batchassociatescramsecretresponse.h"
#include "batchassociatescramsecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::BatchAssociateScramSecretResponse
 * \brief The BatchAssociateScramSecretResponse class provides an interace for Kafka BatchAssociateScramSecret responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::batchAssociateScramSecret
 */

/*!
 * Constructs a BatchAssociateScramSecretResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAssociateScramSecretResponse::BatchAssociateScramSecretResponse(
        const BatchAssociateScramSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new BatchAssociateScramSecretResponsePrivate(this), parent)
{
    setRequest(new BatchAssociateScramSecretRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAssociateScramSecretRequest * BatchAssociateScramSecretResponse::request() const
{
    Q_D(const BatchAssociateScramSecretResponse);
    return static_cast<const BatchAssociateScramSecretRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka BatchAssociateScramSecret \a response.
 */
void BatchAssociateScramSecretResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAssociateScramSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::BatchAssociateScramSecretResponsePrivate
 * \brief The BatchAssociateScramSecretResponsePrivate class provides private implementation for BatchAssociateScramSecretResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a BatchAssociateScramSecretResponsePrivate object with public implementation \a q.
 */
BatchAssociateScramSecretResponsePrivate::BatchAssociateScramSecretResponsePrivate(
    BatchAssociateScramSecretResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka BatchAssociateScramSecret response element from \a xml.
 */
void BatchAssociateScramSecretResponsePrivate::parseBatchAssociateScramSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAssociateScramSecretResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
