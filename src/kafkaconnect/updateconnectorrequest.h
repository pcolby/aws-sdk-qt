// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORREQUEST_H
#define QTAWS_UPDATECONNECTORREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class UpdateConnectorRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT UpdateConnectorRequest : public KafkaConnectRequest {

public:
    UpdateConnectorRequest(const UpdateConnectorRequest &other);
    UpdateConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
