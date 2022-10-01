// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMPLUGINSREQUEST_P_H
#define QTAWS_LISTCUSTOMPLUGINSREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "listcustompluginsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListCustomPluginsRequest;

class ListCustomPluginsRequestPrivate : public KafkaConnectRequestPrivate {

public:
    ListCustomPluginsRequestPrivate(const KafkaConnectRequest::Action action,
                                   ListCustomPluginsRequest * const q);
    ListCustomPluginsRequestPrivate(const ListCustomPluginsRequestPrivate &other,
                                   ListCustomPluginsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomPluginsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
