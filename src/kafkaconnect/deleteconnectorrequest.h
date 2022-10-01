// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORREQUEST_H
#define QTAWS_DELETECONNECTORREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteConnectorRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT DeleteConnectorRequest : public KafkaConnectRequest {

public:
    DeleteConnectorRequest(const DeleteConnectorRequest &other);
    DeleteConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
