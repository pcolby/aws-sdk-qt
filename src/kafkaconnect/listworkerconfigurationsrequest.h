// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERCONFIGURATIONSREQUEST_H
#define QTAWS_LISTWORKERCONFIGURATIONSREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListWorkerConfigurationsRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT ListWorkerConfigurationsRequest : public KafkaConnectRequest {

public:
    ListWorkerConfigurationsRequest(const ListWorkerConfigurationsRequest &other);
    ListWorkerConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkerConfigurationsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
