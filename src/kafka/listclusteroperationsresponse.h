// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTEROPERATIONSRESPONSE_H
#define QTAWS_LISTCLUSTEROPERATIONSRESPONSE_H

#include "kafkaresponse.h"
#include "listclusteroperationsrequest.h"

namespace QtAws {
namespace Kafka {

class ListClusterOperationsResponsePrivate;

class QTAWSKAFKA_EXPORT ListClusterOperationsResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListClusterOperationsResponse(const ListClusterOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClusterOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClusterOperationsResponse)
    Q_DISABLE_COPY(ListClusterOperationsResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
