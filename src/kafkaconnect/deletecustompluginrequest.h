// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMPLUGINREQUEST_H
#define QTAWS_DELETECUSTOMPLUGINREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteCustomPluginRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT DeleteCustomPluginRequest : public KafkaConnectRequest {

public:
    DeleteCustomPluginRequest(const DeleteCustomPluginRequest &other);
    DeleteCustomPluginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
