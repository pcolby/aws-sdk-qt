// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERKAFKAVERSIONREQUEST_H
#define QTAWS_UPDATECLUSTERKAFKAVERSIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterKafkaVersionRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateClusterKafkaVersionRequest : public KafkaRequest {

public:
    UpdateClusterKafkaVersionRequest(const UpdateClusterKafkaVersionRequest &other);
    UpdateClusterKafkaVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterKafkaVersionRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
