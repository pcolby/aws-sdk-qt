// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSV2RESPONSE_H
#define QTAWS_LISTCLUSTERSV2RESPONSE_H

#include "kafkaresponse.h"
#include "listclustersv2request.h"

namespace QtAws {
namespace Kafka {

class ListClustersV2ResponsePrivate;

class QTAWSKAFKA_EXPORT ListClustersV2Response : public KafkaResponse {
    Q_OBJECT

public:
    ListClustersV2Response(const ListClustersV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClustersV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClustersV2Response)
    Q_DISABLE_COPY(ListClustersV2Response)

};

} // namespace Kafka
} // namespace QtAws

#endif
