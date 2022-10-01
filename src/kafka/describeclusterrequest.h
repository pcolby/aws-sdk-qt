// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_H
#define QTAWS_DESCRIBECLUSTERREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterRequestPrivate;

class QTAWSKAFKA_EXPORT DescribeClusterRequest : public KafkaRequest {

public:
    DescribeClusterRequest(const DescribeClusterRequest &other);
    DescribeClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
