// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYREQUEST_H
#define QTAWS_UPDATESECURITYREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class UpdateSecurityRequestPrivate;

class QTAWSKAFKA_EXPORT UpdateSecurityRequest : public KafkaRequest {

public:
    UpdateSecurityRequest(const UpdateSecurityRequest &other);
    UpdateSecurityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
