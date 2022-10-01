// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERSTORAGEREQUEST_H
#define QTAWS_UPDATEBROKERSTORAGEREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerStorageRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateBrokerStorageRequest : public KafkaRequest {

public:
    UpdateBrokerStorageRequest(const UpdateBrokerStorageRequest &other);
    UpdateBrokerStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerStorageRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
