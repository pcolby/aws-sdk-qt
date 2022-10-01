// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "deleteconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteConfigurationSetEventDestinationRequest;

class DeleteConfigurationSetEventDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteConfigurationSetEventDestinationRequestPrivate(const SESv2Request::Action action,
                                   DeleteConfigurationSetEventDestinationRequest * const q);
    DeleteConfigurationSetEventDestinationRequestPrivate(const DeleteConfigurationSetEventDestinationRequestPrivate &other,
                                   DeleteConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetEventDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
