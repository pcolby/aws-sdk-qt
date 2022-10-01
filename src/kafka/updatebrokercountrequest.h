// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERCOUNTREQUEST_H
#define QTAWS_UPDATEBROKERCOUNTREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerCountRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateBrokerCountRequest : public KafkaRequest {

public:
    UpdateBrokerCountRequest(const UpdateBrokerCountRequest &other);
    UpdateBrokerCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerCountRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
