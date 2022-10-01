// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONREQUEST_P_H

#include "mqrequest_p.h"
#include "createconfigurationrequest.h"

namespace QtAws {
namespace Mq {

class CreateConfigurationRequest;

class CreateConfigurationRequestPrivate : public MqRequestPrivate {

public:
    CreateConfigurationRequestPrivate(const MqRequest::Action action,
                                   CreateConfigurationRequest * const q);
    CreateConfigurationRequestPrivate(const CreateConfigurationRequestPrivate &other,
                                   CreateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
