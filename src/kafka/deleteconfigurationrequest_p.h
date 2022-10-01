// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONREQUEST_P_H

#include "kafkarequest_p.h"
#include "deleteconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class DeleteConfigurationRequest;

class DeleteConfigurationRequestPrivate : public KafkaRequestPrivate {

public:
    DeleteConfigurationRequestPrivate(const KafkaRequest::Action action,
                                   DeleteConfigurationRequest * const q);
    DeleteConfigurationRequestPrivate(const DeleteConfigurationRequestPrivate &other,
                                   DeleteConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
