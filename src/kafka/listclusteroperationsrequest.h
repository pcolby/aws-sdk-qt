// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTEROPERATIONSREQUEST_H
#define QTAWS_LISTCLUSTEROPERATIONSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListClusterOperationsRequestPrivate;

class QTAWSKAFKA_EXPORT ListClusterOperationsRequest : public KafkaRequest {

public:
    ListClusterOperationsRequest(const ListClusterOperationsRequest &other);
    ListClusterOperationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClusterOperationsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
