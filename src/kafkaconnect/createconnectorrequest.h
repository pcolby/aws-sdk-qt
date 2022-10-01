// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORREQUEST_H
#define QTAWS_CREATECONNECTORREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateConnectorRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT CreateConnectorRequest : public KafkaConnectRequest {

public:
    CreateConnectorRequest(const CreateConnectorRequest &other);
    CreateConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
