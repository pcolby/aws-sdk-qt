// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "sesrequest_p.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetEventDestinationRequest;

class UpdateConfigurationSetEventDestinationRequestPrivate : public SesRequestPrivate {

public:
    UpdateConfigurationSetEventDestinationRequestPrivate(const SesRequest::Action action,
                                   UpdateConfigurationSetEventDestinationRequest * const q);
    UpdateConfigurationSetEventDestinationRequestPrivate(const UpdateConfigurationSetEventDestinationRequestPrivate &other,
                                   UpdateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetEventDestinationRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
