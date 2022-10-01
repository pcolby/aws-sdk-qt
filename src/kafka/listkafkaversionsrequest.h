// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKAFKAVERSIONSREQUEST_H
#define QTAWS_LISTKAFKAVERSIONSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListKafkaVersionsRequestPrivate;

class QTAWSKAFKA_EXPORT ListKafkaVersionsRequest : public KafkaRequest {

public:
    ListKafkaVersionsRequest(const ListKafkaVersionsRequest &other);
    ListKafkaVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKafkaVersionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
