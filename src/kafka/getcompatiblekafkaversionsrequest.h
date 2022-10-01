// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEKAFKAVERSIONSREQUEST_H
#define QTAWS_GETCOMPATIBLEKAFKAVERSIONSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class GetCompatibleKafkaVersionsRequestPrivate;

class QTAWSKAFKA_EXPORT GetCompatibleKafkaVersionsRequest : public KafkaRequest {

public:
    GetCompatibleKafkaVersionsRequest(const GetCompatibleKafkaVersionsRequest &other);
    GetCompatibleKafkaVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCompatibleKafkaVersionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
