// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONREQUEST_H
#define QTAWS_DELETECONFIGURATIONREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DeleteConfigurationRequestPrivate;

class QTAWSKAFKA_EXPORT DeleteConfigurationRequest : public KafkaRequest {

public:
    DeleteConfigurationRequest(const DeleteConfigurationRequest &other);
    DeleteConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
