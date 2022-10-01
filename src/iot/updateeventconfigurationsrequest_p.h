// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONSREQUEST_P_H
#define QTAWS_UPDATEEVENTCONFIGURATIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "updateeventconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class UpdateEventConfigurationsRequest;

class UpdateEventConfigurationsRequestPrivate : public IoTRequestPrivate {

public:
    UpdateEventConfigurationsRequestPrivate(const IoTRequest::Action action,
                                   UpdateEventConfigurationsRequest * const q);
    UpdateEventConfigurationsRequestPrivate(const UpdateEventConfigurationsRequestPrivate &other,
                                   UpdateEventConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventConfigurationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
