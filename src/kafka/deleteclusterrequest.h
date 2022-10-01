// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERREQUEST_H
#define QTAWS_DELETECLUSTERREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DeleteClusterRequestPrivate;

class QTAWSKAFKA_EXPORT DeleteClusterRequest : public KafkaRequest {

public:
    DeleteClusterRequest(const DeleteClusterRequest &other);
    DeleteClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
