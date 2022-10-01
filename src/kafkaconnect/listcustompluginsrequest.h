// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMPLUGINSREQUEST_H
#define QTAWS_LISTCUSTOMPLUGINSREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListCustomPluginsRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT ListCustomPluginsRequest : public KafkaConnectRequest {

public:
    ListCustomPluginsRequest(const ListCustomPluginsRequest &other);
    ListCustomPluginsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomPluginsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
