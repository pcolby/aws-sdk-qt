// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteConfigurationSetRequest;

class DeleteConfigurationSetRequestPrivate : public PinpointEmailRequestPrivate {

public:
    DeleteConfigurationSetRequestPrivate(const PinpointEmailRequest::Action action,
                                   DeleteConfigurationSetRequest * const q);
    DeleteConfigurationSetRequestPrivate(const DeleteConfigurationSetRequestPrivate &other,
                                   DeleteConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
