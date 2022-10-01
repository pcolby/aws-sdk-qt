// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERTYPEREQUEST_H
#define QTAWS_UPDATEBROKERTYPEREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerTypeRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateBrokerTypeRequest : public KafkaRequest {

public:
    UpdateBrokerTypeRequest(const UpdateBrokerTypeRequest &other);
    UpdateBrokerTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerTypeRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
