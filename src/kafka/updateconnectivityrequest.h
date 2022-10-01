// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYREQUEST_H
#define QTAWS_UPDATECONNECTIVITYREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateConnectivityRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateConnectivityRequest : public KafkaRequest {

public:
    UpdateConnectivityRequest(const UpdateConnectivityRequest &other);
    UpdateConnectivityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectivityRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
