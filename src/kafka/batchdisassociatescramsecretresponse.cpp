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

#include "batchdisassociatescramsecretresponse.h"
#include "batchdisassociatescramsecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::BatchDisassociateScramSecretResponse
 * \brief The BatchDisassociateScramSecretResponse class provides an interace for Kafka BatchDisassociateScramSecret responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::batchDisassociateScramSecret
 */

/*!
 * Constructs a BatchDisassociateScramSecretResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisassociateScramSecretResponse::BatchDisassociateScramSecretResponse(
        const BatchDisassociateScramSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new BatchDisassociateScramSecretResponsePrivate(this), parent)
{
    setRequest(new BatchDisassociateScramSecretRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisassociateScramSecretRequest * BatchDisassociateScramSecretResponse::request() const
{
    return static_cast<const BatchDisassociateScramSecretRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka BatchDisassociateScramSecret \a response.
 */
void BatchDisassociateScramSecretResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisassociateScramSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::BatchDisassociateScramSecretResponsePrivate
 * \brief The BatchDisassociateScramSecretResponsePrivate class provides private implementation for BatchDisassociateScramSecretResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a BatchDisassociateScramSecretResponsePrivate object with public implementation \a q.
 */
BatchDisassociateScramSecretResponsePrivate::BatchDisassociateScramSecretResponsePrivate(
    BatchDisassociateScramSecretResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka BatchDisassociateScramSecret response element from \a xml.
 */
void BatchDisassociateScramSecretResponsePrivate::parseBatchDisassociateScramSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisassociateScramSecretResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
