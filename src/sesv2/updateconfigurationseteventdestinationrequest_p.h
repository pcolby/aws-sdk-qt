// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateConfigurationSetEventDestinationRequest;

class UpdateConfigurationSetEventDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateConfigurationSetEventDestinationRequestPrivate(const SESv2Request::Action action,
                                   UpdateConfigurationSetEventDestinationRequest * const q);
    UpdateConfigurationSetEventDestinationRequestPrivate(const UpdateConfigurationSetEventDestinationRequestPrivate &other,
                                   UpdateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetEventDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
