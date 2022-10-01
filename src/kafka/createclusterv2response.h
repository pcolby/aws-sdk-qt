// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERV2RESPONSE_H
#define QTAWS_CREATECLUSTERV2RESPONSE_H

#include "kafkaresponse.h"
#include "createclusterv2request.h"

namespace QtAws {
namespace Kafka {

class CreateClusterV2ResponsePrivate;

class QTAWSKAFKA_EXPORT CreateClusterV2Response : public KafkaResponse {
    Q_OBJECT

public:
    CreateClusterV2Response(const CreateClusterV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterV2Response)
    Q_DISABLE_COPY(CreateClusterV2Response)

};

} // namespace Kafka
} // namespace QtAws

#endif
