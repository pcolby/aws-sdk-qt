// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSREQUEST_H
#define QTAWS_LISTCONNECTORSREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListConnectorsRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT ListConnectorsRequest : public KafkaConnectRequest {

public:
    ListConnectorsRequest(const ListConnectorsRequest &other);
    ListConnectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
