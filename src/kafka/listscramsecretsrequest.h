// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRAMSECRETSREQUEST_H
#define QTAWS_LISTSCRAMSECRETSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListScramSecretsRequestPrivate;

class QTAWSKAFKA_EXPORT ListScramSecretsRequest : public KafkaRequest {

public:
    ListScramSecretsRequest(const ListScramSecretsRequest &other);
    ListScramSecretsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScramSecretsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
