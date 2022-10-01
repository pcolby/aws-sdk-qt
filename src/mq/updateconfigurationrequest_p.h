// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONREQUEST_P_H

#include "mqrequest_p.h"
#include "updateconfigurationrequest.h"

namespace QtAws {
namespace Mq {

class UpdateConfigurationRequest;

class UpdateConfigurationRequestPrivate : public MqRequestPrivate {

public:
    UpdateConfigurationRequestPrivate(const MqRequest::Action action,
                                   UpdateConfigurationRequest * const q);
    UpdateConfigurationRequestPrivate(const UpdateConfigurationRequestPrivate &other,
                                   UpdateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
