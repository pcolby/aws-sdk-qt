// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteConfigurationSetRequest;

class DeleteConfigurationSetRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteConfigurationSetRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteConfigurationSetRequest * const q);
    DeleteConfigurationSetRequestPrivate(const DeleteConfigurationSetRequestPrivate &other,
                                   DeleteConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
