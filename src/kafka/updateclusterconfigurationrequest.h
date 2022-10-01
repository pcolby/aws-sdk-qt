// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGURATIONREQUEST_H
#define QTAWS_UPDATECLUSTERCONFIGURATIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterConfigurationRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateClusterConfigurationRequest : public KafkaRequest {

public:
    UpdateClusterConfigurationRequest(const UpdateClusterConfigurationRequest &other);
    UpdateClusterConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
