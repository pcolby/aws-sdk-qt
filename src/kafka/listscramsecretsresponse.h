// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRAMSECRETSRESPONSE_H
#define QTAWS_LISTSCRAMSECRETSRESPONSE_H

#include "kafkaresponse.h"
#include "listscramsecretsrequest.h"

namespace QtAws {
namespace Kafka {

class ListScramSecretsResponsePrivate;

class QTAWSKAFKA_EXPORT ListScramSecretsResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListScramSecretsResponse(const ListScramSecretsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListScramSecretsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScramSecretsResponse)
    Q_DISABLE_COPY(ListScramSecretsResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
