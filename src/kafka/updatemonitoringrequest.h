// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGREQUEST_H
#define QTAWS_UPDATEMONITORINGREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateMonitoringRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateMonitoringRequest : public KafkaRequest {

public:
    UpdateMonitoringRequest(const UpdateMonitoringRequest &other);
    UpdateMonitoringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMonitoringRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
