// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "createconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateConfigurationSetRequest;

class CreateConfigurationSetRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    CreateConfigurationSetRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   CreateConfigurationSetRequest * const q);
    CreateConfigurationSetRequestPrivate(const CreateConfigurationSetRequestPrivate &other,
                                   CreateConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
