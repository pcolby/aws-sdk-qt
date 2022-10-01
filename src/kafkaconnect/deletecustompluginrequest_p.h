// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMPLUGINREQUEST_P_H
#define QTAWS_DELETECUSTOMPLUGINREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "deletecustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteCustomPluginRequest;

class DeleteCustomPluginRequestPrivate : public KafkaConnectRequestPrivate {

public:
    DeleteCustomPluginRequestPrivate(const KafkaConnectRequest::Action action,
                                   DeleteCustomPluginRequest * const q);
    DeleteCustomPluginRequestPrivate(const DeleteCustomPluginRequestPrivate &other,
                                   DeleteCustomPluginRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
