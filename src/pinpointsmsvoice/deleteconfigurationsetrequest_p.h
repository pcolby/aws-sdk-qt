// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class DeleteConfigurationSetRequest;

class DeleteConfigurationSetRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    DeleteConfigurationSetRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   DeleteConfigurationSetRequest * const q);
    DeleteConfigurationSetRequestPrivate(const DeleteConfigurationSetRequestPrivate &other,
                                   DeleteConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
