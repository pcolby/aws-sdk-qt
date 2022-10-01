// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMPLUGINREQUEST_H
#define QTAWS_CREATECUSTOMPLUGINREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateCustomPluginRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT CreateCustomPluginRequest : public KafkaConnectRequest {

public:
    CreateCustomPluginRequest(const CreateCustomPluginRequest &other);
    CreateCustomPluginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
