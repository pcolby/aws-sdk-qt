// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
